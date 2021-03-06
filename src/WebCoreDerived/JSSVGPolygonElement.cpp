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

#if ENABLE(SVG)

#include "JSSVGPolygonElement.h"

#include "JSSVGPointList.h"
#include "SVGPointList.h"
#include "SVGPolygonElement.h"
#include <wtf/GetPtr.h>

#if ENABLE(SVG)
#include "JSSVGAnimatedBoolean.h"
#endif

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGPolygonElementTableValues[] =
{
    { "points", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPolygonElementPoints), (intptr_t)0 },
    { "animatedPoints", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPolygonElementAnimatedPoints), (intptr_t)0 },
#if ENABLE(SVG)
    { "externalResourcesRequired", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPolygonElementExternalResourcesRequired), (intptr_t)0 },
#endif
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPolygonElementConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGPolygonElementTable = { 9, 7, JSSVGPolygonElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGPolygonElementConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGPolygonElementConstructorTable = { 1, 0, JSSVGPolygonElementConstructorTableValues, 0 };
const ClassInfo JSSVGPolygonElementConstructor::s_info = { "SVGPolygonElementConstructor", &Base::s_info, &JSSVGPolygonElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGPolygonElementConstructor) };

JSSVGPolygonElementConstructor::JSSVGPolygonElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGPolygonElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGPolygonElementPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGPolygonElementConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPolygonElementConstructor, JSDOMWrapper>(exec, JSSVGPolygonElementConstructorTable, jsCast<JSSVGPolygonElementConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSSVGPolygonElementPrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGPolygonElementPrototypeTable = { 1, 0, JSSVGPolygonElementPrototypeTableValues, 0 };
const ClassInfo JSSVGPolygonElementPrototype::s_info = { "SVGPolygonElementPrototype", &Base::s_info, &JSSVGPolygonElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGPolygonElementPrototype) };

JSObject* JSSVGPolygonElementPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGPolygonElement>(vm, globalObject);
}

const ClassInfo JSSVGPolygonElement::s_info = { "SVGPolygonElement", &Base::s_info, &JSSVGPolygonElementTable, 0 , CREATE_METHOD_TABLE(JSSVGPolygonElement) };

JSSVGPolygonElement::JSSVGPolygonElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPolygonElement> impl)
    : JSSVGGraphicsElement(structure, globalObject, impl)
{
}

void JSSVGPolygonElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSSVGPolygonElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGPolygonElementPrototype::create(vm, globalObject, JSSVGPolygonElementPrototype::createStructure(vm, globalObject, JSSVGGraphicsElementPrototype::self(vm, globalObject)));
}

bool JSSVGPolygonElement::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGPolygonElement* thisObject = jsCast<JSSVGPolygonElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSSVGPolygonElement, Base>(exec, JSSVGPolygonElementTable, thisObject, propertyName, slot);
}

EncodedJSValue jsSVGPolygonElementPoints(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSSVGPolygonElement* castedThis = jsDynamicCast<JSSVGPolygonElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    SVGPolygonElement& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.points()));
    return JSValue::encode(result);
}


EncodedJSValue jsSVGPolygonElementAnimatedPoints(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSSVGPolygonElement* castedThis = jsDynamicCast<JSSVGPolygonElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    SVGPolygonElement& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.animatedPoints()));
    return JSValue::encode(result);
}


#if ENABLE(SVG)
EncodedJSValue jsSVGPolygonElementExternalResourcesRequired(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSSVGPolygonElement* castedThis = jsDynamicCast<JSSVGPolygonElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    SVGPolygonElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedBoolean> obj = impl.externalResourcesRequiredAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}

#endif

EncodedJSValue jsSVGPolygonElementConstructor(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue, PropertyName)
{
    JSSVGPolygonElement* domObject = jsDynamicCast<JSSVGPolygonElement*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGPolygonElement::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSSVGPolygonElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGPolygonElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)
