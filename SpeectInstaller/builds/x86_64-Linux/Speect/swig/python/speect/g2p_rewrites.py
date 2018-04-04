# This file was automatically generated by SWIG (http://www.swig.org).
# Version 3.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.




"""Speect Plug-in for SG2PRewrites class"""


from sys import version_info as _swig_python_version_info
if _swig_python_version_info >= (2, 7, 0):
    def swig_import_helper():
        import importlib
        pkg = __name__.rpartition('.')[0]
        mname = '.'.join((pkg, '_g2p_rewrites')).lstrip('.')
        try:
            return importlib.import_module(mname)
        except ImportError:
            return importlib.import_module('_g2p_rewrites')
    _g2p_rewrites = swig_import_helper()
    del swig_import_helper
elif _swig_python_version_info >= (2, 6, 0):
    def swig_import_helper():
        from os.path import dirname
        import imp
        fp = None
        try:
            fp, pathname, description = imp.find_module('_g2p_rewrites', [dirname(__file__)])
        except ImportError:
            import _g2p_rewrites
            return _g2p_rewrites
        if fp is not None:
            try:
                _mod = imp.load_module('_g2p_rewrites', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _g2p_rewrites = swig_import_helper()
    del swig_import_helper
else:
    import _g2p_rewrites
del _swig_python_version_info
try:
    _swig_property = property
except NameError:
    pass  # Python < 2.2 doesn't have 'property'.

try:
    import builtins as __builtin__
except ImportError:
    import __builtin__

def _swig_setattr_nondynamic(self, class_type, name, value, static=1):
    if (name == "thisown"):
        return self.this.own(value)
    if (name == "this"):
        if type(value).__name__ == 'SwigPyObject':
            self.__dict__[name] = value
            return
    method = class_type.__swig_setmethods__.get(name, None)
    if method:
        return method(self, value)
    if (not static):
        if _newclass:
            object.__setattr__(self, name, value)
        else:
            self.__dict__[name] = value
    else:
        raise AttributeError("You cannot add attributes to %s" % self)


def _swig_setattr(self, class_type, name, value):
    return _swig_setattr_nondynamic(self, class_type, name, value, 0)


def _swig_getattr(self, class_type, name):
    if (name == "thisown"):
        return self.this.own()
    method = class_type.__swig_getmethods__.get(name, None)
    if method:
        return method(self)
    raise AttributeError("'%s' object has no attribute '%s'" % (class_type.__name__, name))


def _swig_repr(self):
    try:
        strthis = "proxy of " + self.this.__repr__()
    except __builtin__.Exception:
        strthis = ""
    return "<%s.%s; %s >" % (self.__class__.__module__, self.__class__.__name__, strthis,)

try:
    _object = object
    _newclass = 1
except __builtin__.Exception:
    class _object:
        pass
    _newclass = 0


__version__ = "1.0.0"
__license__= "mit"

import speect

def _load_g2p_rewrites_ebml(path):
    """_load_g2p_rewrites_ebml(char const * path) -> SG2P *"""
    return _g2p_rewrites._load_g2p_rewrites_ebml(path)

from . import g2p

def load_g2p_rewrites_ebml(path):
    """
    load_g2p_rewrites_ebml(path)

    Load a g2p (grapheme-to-phoneme) rewrites class implementation from
    an EBML file.

    :param path: Full path and file name where the EBML format g2p rewrites
                 should be loaded from.
    :type path: string
    :return: g2p (grapheme-to-phoneme) instance.
    :rtype: ``SG2P``
    """

    if not isinstance(path, str):
        raise TypeError("Argument \"path\" must be a string")

    return _load_g2p_rewrites_ebml(path)


setattr(g2p.SG2P, "load_g2p_rewrites_ebml", staticmethod(load_g2p_rewrites_ebml))

# This file is compatible with both classic and new-style classes.

