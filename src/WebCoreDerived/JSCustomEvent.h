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

#ifndef JSCustomEvent_h
#define JSCustomEvent_h

#include "CustomEvent.h"
#include "JSDOMBinding.h"
#include "JSEvent.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSDictionary;

class JSCustomEvent : public JSEvent {
public:
    typedef JSEvent Base;
    static JSCustomEvent* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<CustomEvent> impl)
    {
        JSCustomEvent* ptr = new (NotNull, JSC::allocateCell<JSCustomEvent>(globalObject->vm().heap)) JSCustomEvent(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    static JSC::JSValue getConstructor(JSC::VM&, JSC::JSGlobalObject*);
    CustomEvent& impl() const
    {
        return static_cast<CustomEvent&>(Base::impl());
    }
protected:
    JSCustomEvent(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<CustomEvent>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};


class JSCustomEventPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::VM&, JSC::JSGlobalObject*);
    static JSCustomEventPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSCustomEventPrototype* ptr = new (NotNull, JSC::allocateCell<JSCustomEventPrototype>(vm.heap)) JSCustomEventPrototype(vm, globalObject, structure);
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
    JSCustomEventPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSCustomEventConstructor : public DOMConstructorObject {
private:
    JSCustomEventConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSCustomEventConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSCustomEventConstructor* ptr = new (NotNull, JSC::allocateCell<JSCustomEventConstructor>(vm.heap)) JSCustomEventConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSCustomEvent(JSC::ExecState*);
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
};

bool fillCustomEventInit(CustomEventInit&, JSDictionary&);

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsCustomEventPrototypeFunctionInitCustomEvent(JSC::ExecState*);
// Attributes

JSC::EncodedJSValue jsCustomEventDetail(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsCustomEventConstructor(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);

} // namespace WebCore

#endif
