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

#include "config.h"

#if ENABLE(WEBGL)

#include "JSWebGLRenderbuffer.h"

#include "WebGLRenderbuffer.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSWebGLRenderbufferTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebGLRenderbufferConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSWebGLRenderbufferTable = { 2, 1, JSWebGLRenderbufferTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSWebGLRenderbufferConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSWebGLRenderbufferConstructorTable = { 1, 0, JSWebGLRenderbufferConstructorTableValues, 0 };
const ClassInfo JSWebGLRenderbufferConstructor::s_info = { "WebGLRenderbufferConstructor", &Base::s_info, &JSWebGLRenderbufferConstructorTable, 0, CREATE_METHOD_TABLE(JSWebGLRenderbufferConstructor) };

JSWebGLRenderbufferConstructor::JSWebGLRenderbufferConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSWebGLRenderbufferConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSWebGLRenderbufferPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSWebGLRenderbufferConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSWebGLRenderbufferConstructor, JSDOMWrapper>(exec, JSWebGLRenderbufferConstructorTable, jsCast<JSWebGLRenderbufferConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSWebGLRenderbufferPrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSWebGLRenderbufferPrototypeTable = { 1, 0, JSWebGLRenderbufferPrototypeTableValues, 0 };
const ClassInfo JSWebGLRenderbufferPrototype::s_info = { "WebGLRenderbufferPrototype", &Base::s_info, &JSWebGLRenderbufferPrototypeTable, 0, CREATE_METHOD_TABLE(JSWebGLRenderbufferPrototype) };

JSObject* JSWebGLRenderbufferPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWebGLRenderbuffer>(vm, globalObject);
}

const ClassInfo JSWebGLRenderbuffer::s_info = { "WebGLRenderbuffer", &Base::s_info, &JSWebGLRenderbufferTable, 0 , CREATE_METHOD_TABLE(JSWebGLRenderbuffer) };

JSWebGLRenderbuffer::JSWebGLRenderbuffer(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<WebGLRenderbuffer> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSWebGLRenderbuffer::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSWebGLRenderbuffer::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSWebGLRenderbufferPrototype::create(vm, globalObject, JSWebGLRenderbufferPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

void JSWebGLRenderbuffer::destroy(JSC::JSCell* cell)
{
    JSWebGLRenderbuffer* thisObject = static_cast<JSWebGLRenderbuffer*>(cell);
    thisObject->JSWebGLRenderbuffer::~JSWebGLRenderbuffer();
}

JSWebGLRenderbuffer::~JSWebGLRenderbuffer()
{
    releaseImplIfNotNull();
}

bool JSWebGLRenderbuffer::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSWebGLRenderbuffer* thisObject = jsCast<JSWebGLRenderbuffer*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSWebGLRenderbuffer, Base>(exec, JSWebGLRenderbufferTable, thisObject, propertyName, slot);
}

EncodedJSValue jsWebGLRenderbufferConstructor(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue, PropertyName)
{
    JSWebGLRenderbuffer* domObject = jsDynamicCast<JSWebGLRenderbuffer*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSWebGLRenderbuffer::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSWebGLRenderbuffer::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSWebGLRenderbufferConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

bool JSWebGLRenderbufferOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSWebGLRenderbufferOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSWebGLRenderbuffer* jsWebGLRenderbuffer = jsCast<JSWebGLRenderbuffer*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsWebGLRenderbuffer->impl(), jsWebGLRenderbuffer);
    jsWebGLRenderbuffer->releaseImpl();
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7WebGLRenderbuffer@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore17WebGLRenderbufferE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, WebGLRenderbuffer* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSWebGLRenderbuffer>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7WebGLRenderbuffer@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore17WebGLRenderbufferE[2];
#if COMPILER(CLANG)
    // If this fails WebGLRenderbuffer does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(WebGLRenderbuffer), WebGLRenderbuffer_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // WebGLRenderbuffer has subclasses. If WebGLRenderbuffer has subclasses that get passed
    // to toJS() we currently require WebGLRenderbuffer you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<WebGLRenderbuffer>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSWebGLRenderbuffer>(exec, globalObject, impl);
}

WebGLRenderbuffer* toWebGLRenderbuffer(JSC::JSValue value)
{
    return value.inherits(JSWebGLRenderbuffer::info()) ? &jsCast<JSWebGLRenderbuffer*>(value)->impl() : 0;
}

}

#endif // ENABLE(WEBGL)
