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
#include "JSNodeList.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSNode.h"
#include "Node.h"
#include "NodeList.h"
#include "wtf/text/AtomicString.h"
#include <runtime/Error.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSNodeListTableValues[] =
{
    { "length", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeListLength), (intptr_t)0 },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeListConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSNodeListTable = { 5, 3, JSNodeListTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSNodeListConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSNodeListConstructorTable = { 1, 0, JSNodeListConstructorTableValues, 0 };
const ClassInfo JSNodeListConstructor::s_info = { "NodeListConstructor", &Base::s_info, &JSNodeListConstructorTable, 0, CREATE_METHOD_TABLE(JSNodeListConstructor) };

JSNodeListConstructor::JSNodeListConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSNodeListConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSNodeListPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSNodeListConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSNodeListConstructor, JSDOMWrapper>(exec, JSNodeListConstructorTable, jsCast<JSNodeListConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSNodeListPrototypeTableValues[] =
{
    { "item", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsNodeListPrototypeFunctionItem), (intptr_t)1 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSNodeListPrototypeTable = { 2, 1, JSNodeListPrototypeTableValues, 0 };
const ClassInfo JSNodeListPrototype::s_info = { "NodeListPrototype", &Base::s_info, &JSNodeListPrototypeTable, 0, CREATE_METHOD_TABLE(JSNodeListPrototype) };

JSObject* JSNodeListPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSNodeList>(vm, globalObject);
}

bool JSNodeListPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSNodeListPrototype* thisObject = jsCast<JSNodeListPrototype*>(object);
    return getStaticFunctionSlot<JSObject>(exec, JSNodeListPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSNodeList::s_info = { "NodeList", &Base::s_info, &JSNodeListTable, 0 , CREATE_METHOD_TABLE(JSNodeList) };

JSNodeList::JSNodeList(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<NodeList> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSNodeList::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSNodeList::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSNodeListPrototype::create(vm, globalObject, JSNodeListPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

void JSNodeList::destroy(JSC::JSCell* cell)
{
    JSNodeList* thisObject = static_cast<JSNodeList*>(cell);
    thisObject->JSNodeList::~JSNodeList();
}

JSNodeList::~JSNodeList()
{
    releaseImplIfNotNull();
}

bool JSNodeList::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSNodeList* thisObject = jsCast<JSNodeList*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    const HashEntry* entry = getStaticValueSlotEntryWithoutCaching<JSNodeList>(exec, propertyName);
    if (entry) {
        slot.setCustom(thisObject, entry->attributes(), entry->propertyGetter());
        return true;
    }
    unsigned index = propertyName.asIndex();
    if (index != PropertyName::NotAnIndex && index < thisObject->impl().length()) {
        unsigned attributes = DontDelete | ReadOnly;
        slot.setCustomIndex(thisObject, attributes, index, indexGetter);
        return true;
    }
    if (canGetItemsForName(exec, &thisObject->impl(), propertyName)) {
        slot.setCustom(thisObject, ReadOnly | DontDelete | DontEnum, thisObject->nameGetter);
        return true;
    }
    return getStaticValueSlot<JSNodeList, Base>(exec, JSNodeListTable, thisObject, propertyName, slot);
}

bool JSNodeList::getOwnPropertySlotByIndex(JSObject* object, ExecState* exec, unsigned index, PropertySlot& slot)
{
    JSNodeList* thisObject = jsCast<JSNodeList*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    if (index < thisObject->impl().length()) {
        unsigned attributes = DontDelete | ReadOnly;
        slot.setCustomIndex(thisObject, attributes, index, thisObject->indexGetter);
        return true;
    }
    PropertyName propertyName = Identifier::from(exec, index);
    if (canGetItemsForName(exec, &thisObject->impl(), propertyName)) {
        slot.setCustom(thisObject, ReadOnly | DontDelete | DontEnum, thisObject->nameGetter);
        return true;
    }
    return Base::getOwnPropertySlotByIndex(thisObject, exec, index, slot);
}

EncodedJSValue jsNodeListLength(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSNodeList* castedThis = jsDynamicCast<JSNodeList*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    NodeList& impl = castedThis->impl();
    JSValue result = jsNumber(impl.length());
    return JSValue::encode(result);
}


EncodedJSValue jsNodeListConstructor(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue, PropertyName)
{
    JSNodeList* domObject = jsDynamicCast<JSNodeList*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSNodeList::getConstructor(exec->vm(), domObject->globalObject()));
}

void JSNodeList::getOwnPropertyNames(JSObject* object, ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    JSNodeList* thisObject = jsCast<JSNodeList*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    for (unsigned i = 0, count = thisObject->impl().length(); i < count; ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getOwnPropertyNames(thisObject, exec, propertyNames, mode);
}

JSValue JSNodeList::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSNodeListConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsNodeListPrototypeFunctionItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSNodeList* castedThis = jsDynamicCast<JSNodeList*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSNodeList::info());
    NodeList& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    unsigned index(toUInt32(exec, exec->argument(0), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.item(index)));
    return JSValue::encode(result);
}


EncodedJSValue JSNodeList::indexGetter(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue, unsigned index)
{
    JSNodeList* thisObj = jsCast<JSNodeList*>(JSValue::decode(slotBase));
    ASSERT_GC_OBJECT_INHERITS(thisObj, info());
    return JSValue::encode(toJS(exec, thisObj->globalObject(), thisObj->impl().item(index)));
}

void JSNodeListOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSNodeList* jsNodeList = jsCast<JSNodeList*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsNodeList->impl(), jsNodeList);
    jsNodeList->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, NodeList* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSNodeList>(exec, impl))
        return result;
    ReportMemoryCost<NodeList>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSNodeList>(exec, globalObject, impl);
}

NodeList* toNodeList(JSC::JSValue value)
{
    return value.inherits(JSNodeList::info()) ? &jsCast<JSNodeList*>(value)->impl() : 0;
}

}
