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
#include "JSLocation.h"

#include "DOMStringList.h"
#include "JSDOMStringList.h"
#include "Location.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSLocationTableValues[] =
{
    { "href", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsLocationHref), (intptr_t)setJSLocationHref },
    { "protocol", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsLocationProtocol), (intptr_t)setJSLocationProtocol },
    { "host", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsLocationHost), (intptr_t)setJSLocationHost },
    { "hostname", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsLocationHostname), (intptr_t)setJSLocationHostname },
    { "port", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsLocationPort), (intptr_t)setJSLocationPort },
    { "pathname", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsLocationPathname), (intptr_t)setJSLocationPathname },
    { "search", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsLocationSearch), (intptr_t)setJSLocationSearch },
    { "hash", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsLocationHash), (intptr_t)setJSLocationHash },
    { "origin", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsLocationOrigin), (intptr_t)0 },
    { "ancestorOrigins", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsLocationAncestorOrigins), (intptr_t)0 },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsLocationConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSLocationTable = { 35, 31, JSLocationTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSLocationConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSLocationConstructorTable = { 1, 0, JSLocationConstructorTableValues, 0 };
const ClassInfo JSLocationConstructor::s_info = { "LocationConstructor", &Base::s_info, &JSLocationConstructorTable, 0, CREATE_METHOD_TABLE(JSLocationConstructor) };

JSLocationConstructor::JSLocationConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSLocationConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSLocationPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSLocationConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSLocationConstructor, JSDOMWrapper>(exec, JSLocationConstructorTable, jsCast<JSLocationConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSLocationPrototypeTableValues[] =
{
    { "assign", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsLocationPrototypeFunctionAssign), (intptr_t)0 },
    { "replace", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsLocationPrototypeFunctionReplace), (intptr_t)0 },
    { "reload", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsLocationPrototypeFunctionReload), (intptr_t)0 },
    { "toString", DontDelete | DontEnum | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsLocationPrototypeFunctionToString), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSLocationPrototypeTable = { 9, 7, JSLocationPrototypeTableValues, 0 };
const ClassInfo JSLocationPrototype::s_info = { "LocationPrototype", &Base::s_info, &JSLocationPrototypeTable, 0, CREATE_METHOD_TABLE(JSLocationPrototype) };

JSObject* JSLocationPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSLocation>(vm, globalObject);
}

bool JSLocationPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSLocationPrototype* thisObject = jsCast<JSLocationPrototype*>(object);
    return getStaticFunctionSlot<JSObject>(exec, JSLocationPrototypeTable, thisObject, propertyName, slot);
}

void JSLocationPrototype::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSLocationPrototype* thisObject = jsCast<JSLocationPrototype*>(cell);
    if (thisObject->putDelegate(exec, propertyName, value, slot))
        return;
    Base::put(thisObject, exec, propertyName, value, slot);
}

const ClassInfo JSLocation::s_info = { "Location", &Base::s_info, &JSLocationTable, 0 , CREATE_METHOD_TABLE(JSLocation) };

JSLocation::JSLocation(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<Location> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSLocation::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSLocation::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSLocationPrototype::create(vm, globalObject, JSLocationPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

void JSLocation::destroy(JSC::JSCell* cell)
{
    JSLocation* thisObject = static_cast<JSLocation*>(cell);
    thisObject->JSLocation::~JSLocation();
}

JSLocation::~JSLocation()
{
    releaseImplIfNotNull();
}

bool JSLocation::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSLocation* thisObject = jsCast<JSLocation*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    if (thisObject->getOwnPropertySlotDelegate(exec, propertyName, slot))
        return true;
    return getStaticValueSlot<JSLocation, Base>(exec, JSLocationTable, thisObject, propertyName, slot);
}

bool JSLocation::getOwnPropertySlotByIndex(JSObject* object, ExecState* exec, unsigned index, PropertySlot& slot)
{
    JSLocation* thisObject = jsCast<JSLocation*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    PropertyName propertyName = Identifier::from(exec, index);
    if (thisObject->getOwnPropertySlotDelegate(exec, propertyName, slot))
        return true;
    return Base::getOwnPropertySlotByIndex(thisObject, exec, index, slot);
}

EncodedJSValue jsLocationHref(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSLocation* castedThis = jsDynamicCast<JSLocation*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    Location& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.href());
    return JSValue::encode(result);
}


EncodedJSValue jsLocationProtocol(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSLocation* castedThis = jsDynamicCast<JSLocation*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    Location& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.protocol());
    return JSValue::encode(result);
}


EncodedJSValue jsLocationHost(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSLocation* castedThis = jsDynamicCast<JSLocation*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    Location& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.host());
    return JSValue::encode(result);
}


EncodedJSValue jsLocationHostname(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSLocation* castedThis = jsDynamicCast<JSLocation*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    Location& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.hostname());
    return JSValue::encode(result);
}


EncodedJSValue jsLocationPort(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSLocation* castedThis = jsDynamicCast<JSLocation*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    Location& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.port());
    return JSValue::encode(result);
}


EncodedJSValue jsLocationPathname(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSLocation* castedThis = jsDynamicCast<JSLocation*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    Location& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.pathname());
    return JSValue::encode(result);
}


EncodedJSValue jsLocationSearch(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSLocation* castedThis = jsDynamicCast<JSLocation*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    Location& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.search());
    return JSValue::encode(result);
}


EncodedJSValue jsLocationHash(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSLocation* castedThis = jsDynamicCast<JSLocation*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    Location& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.hash());
    return JSValue::encode(result);
}


EncodedJSValue jsLocationOrigin(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSLocation* castedThis = jsDynamicCast<JSLocation*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    Location& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.origin());
    return JSValue::encode(result);
}


EncodedJSValue jsLocationAncestorOrigins(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSLocation* castedThis = jsDynamicCast<JSLocation*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    Location& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.ancestorOrigins()));
    return JSValue::encode(result);
}


EncodedJSValue jsLocationConstructor(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue, PropertyName)
{
    JSLocation* domObject = jsDynamicCast<JSLocation*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSLocation::getConstructor(exec->vm(), domObject->globalObject()));
}

void JSLocation::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSLocation* thisObject = jsCast<JSLocation*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    if (thisObject->putDelegate(exec, propertyName, value, slot))
        return;
    lookupPut<JSLocation, Base>(exec, propertyName, value, JSLocationTable, thisObject, slot);
}

void JSLocation::putByIndex(JSCell* cell, ExecState* exec, unsigned index, JSValue value, bool shouldThrow)
{
    JSLocation* thisObject = jsCast<JSLocation*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    PropertyName propertyName = Identifier::from(exec, index);
    PutPropertySlot slot(thisObject, shouldThrow);
    if (thisObject->putDelegate(exec, propertyName, value, slot))
        return;
    Base::putByIndex(cell, exec, index, value, shouldThrow);
}

void setJSLocationHref(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSLocation* castedThis = jsDynamicCast<JSLocation*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    castedThis->setHref(exec, value);
}


void setJSLocationProtocol(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSLocation* castedThis = jsDynamicCast<JSLocation*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    castedThis->setProtocol(exec, value);
}


void setJSLocationHost(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSLocation* castedThis = jsDynamicCast<JSLocation*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    castedThis->setHost(exec, value);
}


void setJSLocationHostname(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSLocation* castedThis = jsDynamicCast<JSLocation*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    castedThis->setHostname(exec, value);
}


void setJSLocationPort(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSLocation* castedThis = jsDynamicCast<JSLocation*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    castedThis->setPort(exec, value);
}


void setJSLocationPathname(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSLocation* castedThis = jsDynamicCast<JSLocation*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    castedThis->setPathname(exec, value);
}


void setJSLocationSearch(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSLocation* castedThis = jsDynamicCast<JSLocation*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    castedThis->setSearch(exec, value);
}


void setJSLocationHash(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSLocation* castedThis = jsDynamicCast<JSLocation*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    castedThis->setHash(exec, value);
}


JSValue JSLocation::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSLocationConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsLocationPrototypeFunctionAssign(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSLocation* castedThis = jsDynamicCast<JSLocation*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSLocation::info());
    return JSValue::encode(castedThis->assign(exec));
}

EncodedJSValue JSC_HOST_CALL jsLocationPrototypeFunctionReplace(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSLocation* castedThis = jsDynamicCast<JSLocation*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSLocation::info());
    return JSValue::encode(castedThis->replace(exec));
}

EncodedJSValue JSC_HOST_CALL jsLocationPrototypeFunctionReload(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSLocation* castedThis = jsDynamicCast<JSLocation*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSLocation::info());
    return JSValue::encode(castedThis->reload(exec));
}

EncodedJSValue JSC_HOST_CALL jsLocationPrototypeFunctionToString(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSLocation* castedThis = jsDynamicCast<JSLocation*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSLocation::info());
    return JSValue::encode(castedThis->toStringFunction(exec));
}

static inline bool isObservable(JSLocation* jsLocation)
{
    if (jsLocation->hasCustomProperties())
        return true;
    return false;
}

bool JSLocationOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSLocation* jsLocation = jsCast<JSLocation*>(handle.get().asCell());
    if (!isObservable(jsLocation))
        return false;
    Frame* root = jsLocation->impl().frame();
    if (!root)
        return false;
    return visitor.containsOpaqueRoot(root);
}

void JSLocationOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSLocation* jsLocation = jsCast<JSLocation*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsLocation->impl(), jsLocation);
    jsLocation->releaseImpl();
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7Location@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore8LocationE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, Location* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSLocation>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7Location@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore8LocationE[2];
#if COMPILER(CLANG)
    // If this fails Location does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(Location), Location_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // Location has subclasses. If Location has subclasses that get passed
    // to toJS() we currently require Location you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<Location>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSLocation>(exec, globalObject, impl);
}

Location* toLocation(JSC::JSValue value)
{
    return value.inherits(JSLocation::info()) ? &jsCast<JSLocation*>(value)->impl() : 0;
}

}
