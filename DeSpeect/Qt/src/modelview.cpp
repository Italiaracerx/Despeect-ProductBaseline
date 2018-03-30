#include "modelview.h"
#include "ui_view.h"
#include <QFileDialog>
#include <graphmanager.h>
#include <loadplugincommand.h>
#include <setspeectconfigcommand.h>
#include <uttprocessorcommand.h>
#include "relation.h"
ModelView::ModelView(AbstractCommandList::CommandBuilder *builder, QWidget *parent)
    :QMainWindow(parent)
    ,ui(new Ui::View)
    ,g(new GraphManager())
    ,Processors(new QStandardItemModel(this))
    ,commandsBuilder(builder)
    ,commands(NULL)
{
    ui->setupUi(this);
    g->linkGraphModel(ui->graphicsView);
    g->linkRelationModel(ui->relationsView);
    ui->ProcessorsView->setModel(Processors);
    QFileDialog *t=new QFileDialog(this);
    t->setNameFilter("*.json");
    colors.push_back(QColor(qRgb(172,25,248)));
    colors.push_back(QColor(qRgb(5,210,153)));
    colors.push_back(QColor(qRgb(71,194,52)));
    colors.push_back(QColor(qRgb(24,241,95)));
    colors.push_back(QColor(qRgb(199,1,7)));
    colors.push_back(QColor(qRgb(63,230,150)));
    colors.push_back(QColor(qRgb(151,157,0)));
    connect(ui->actionLoadVoice,SIGNAL(triggered(bool)),t,SLOT(open()));
    connect(t,SIGNAL(fileSelected(QString)),this,SLOT(requestConfiguration(QString)));
    connect(t,SIGNAL(fileSelected(QString)),ui->VoicePath,SLOT(setText(QString)));

    connect(ui->Execute,SIGNAL(released()),this,SLOT(requestProcessorRun()));

}

ModelView::~ModelView()
{
    delete g;
    delete ui;
}
#include "iostream"
void ModelView::requestProcessorRun(bool execSteps)
{
if(ui->UtteranceText->text()!=NULL)
    commandsBuilder->LoadConfig(Configuration::UtteranceText,ui->UtteranceText->text().toStdString());
    std::list<std::string> list;
    for(int i=0;i<Processors->rowCount();++i)
    {

        list.push_back(Processors->item(i)->text().toStdString());
    }
    commandsBuilder->WithProcessors(list);
    commands=commandsBuilder->getCommandList();
    if(!execSteps)
    {
        commands->executeAll();
        int i=0;

        g->clear();

        foreach (auto t,commands->getRelationNames())
        {
            const Relation* currentRelation = commands->getRelation(t);
            Item temp(currentRelation->getRelationHead());
            g->printRelation(QString(t.c_str()),&temp,colors.at(i));
            delete currentRelation;
            ++i;
        }
    }
}

void ModelView::runStep()
{

/*
    if(!t9.isEmpty())
    {

        g->clear();
        AbstractCommand* t=t9.takeFirst();
        t->execute(s);
        delete t;
        if(s->getUtterance())
        {
            int i=0;
            foreach (auto t,s->getUtterance()->getRelationNamesList())
            {
                Relation* currentRelation=s->getUtterance()->getRelationByName(t);
                Item temp(currentRelation->getRelationHead());
                g->printRelation(QString(t.c_str()),&temp,colors.at(i));
                delete currentRelation;
                ++i;
            }
        }
    }*/
}

void ModelView::requestPluginRun()
{

}


void ModelView::requestPluginLoad(const QList<QString>& pluginPaths)
{
/*
    t9.clear();
    AbstractCommand* temp;
    foreach(auto t , pluginPaths)
    {
        t9.push_back(new LoadPluginCommand(t.toStdString()));
        temp=t9.takeFirst();
        temp->execute(s);
        delete temp;
    }
*/
}
#include "iostream"
void ModelView::requestConfiguration(const QString &info, const Configuration::configName &config)
{

    commands=commandsBuilder->LoadConfig(config,info.toStdString()).getCommandList();
    commands->executeAll();
    if(config==Configuration::Voice)
    {
        auto processorsNames=commands->getUttProcessorsNames();
        Processors->clear();
        for(auto it=processorsNames.begin();it!=processorsNames.end();++it)
            Processors->appendRow(new QStandardItem((*it).c_str()));
    }
}