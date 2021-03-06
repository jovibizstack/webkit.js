/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef JSWebGLCompressedTextureS3TC_h
#define JSWebGLCompressedTextureS3TC_h

#if ENABLE(WEBGL)

#include "JSDOMBinding.h"
#include "WebGLCompressedTextureS3TC.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSWebGLCompressedTextureS3TC : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSWebGLCompressedTextureS3TC* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<WebGLCompressedTextureS3TC> impl)
    {
        JSWebGLCompressedTextureS3TC* ptr = new (NotNull, JSC::allocateCell<JSWebGLCompressedTextureS3TC>(globalObject->vm().heap)) JSWebGLCompressedTextureS3TC(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static void destroy(JSC::JSCell*);
    ~JSWebGLCompressedTextureS3TC();
    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    WebGLCompressedTextureS3TC& impl() const { return *m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull()
    {
        if (m_impl) {
            m_impl->deref();
            m_impl = 0;
        }
    }

private:
    WebGLCompressedTextureS3TC* m_impl;
protected:
    JSWebGLCompressedTextureS3TC(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<WebGLCompressedTextureS3TC>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = Base::StructureFlags;
};

class JSWebGLCompressedTextureS3TCOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld&, WebGLCompressedTextureS3TC*)
{
    DEFINE_STATIC_LOCAL(JSWebGLCompressedTextureS3TCOwner, jsWebGLCompressedTextureS3TCOwner, ());
    return &jsWebGLCompressedTextureS3TCOwner;
}

inline void* wrapperContext(DOMWrapperWorld& world, WebGLCompressedTextureS3TC*)
{
    return &world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, WebGLCompressedTextureS3TC*);
WebGLCompressedTextureS3TC* toWebGLCompressedTextureS3TC(JSC::JSValue);

class JSWebGLCompressedTextureS3TCPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::VM&, JSC::JSGlobalObject*);
    static JSWebGLCompressedTextureS3TCPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSWebGLCompressedTextureS3TCPrototype* ptr = new (NotNull, JSC::allocateCell<JSWebGLCompressedTextureS3TCPrototype>(vm.heap)) JSWebGLCompressedTextureS3TCPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSWebGLCompressedTextureS3TCPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Constants

JSC::EncodedJSValue jsWebGLCompressedTextureS3TCCOMPRESSED_RGB_S3TC_DXT1_EXT(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsWebGLCompressedTextureS3TCCOMPRESSED_RGBA_S3TC_DXT1_EXT(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsWebGLCompressedTextureS3TCCOMPRESSED_RGBA_S3TC_DXT3_EXT(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsWebGLCompressedTextureS3TCCOMPRESSED_RGBA_S3TC_DXT5_EXT(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(WEBGL)

#endif
