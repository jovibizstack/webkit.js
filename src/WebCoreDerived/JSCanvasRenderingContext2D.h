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

#ifndef JSCanvasRenderingContext2D_h
#define JSCanvasRenderingContext2D_h

#include "CanvasRenderingContext2D.h"
#include "JSCanvasRenderingContext.h"
#include "JSDOMBinding.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSCanvasRenderingContext2D : public JSCanvasRenderingContext {
public:
    typedef JSCanvasRenderingContext Base;
    static JSCanvasRenderingContext2D* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<CanvasRenderingContext2D> impl)
    {
        JSCanvasRenderingContext2D* ptr = new (NotNull, JSC::allocateCell<JSCanvasRenderingContext2D>(globalObject->vm().heap)) JSCanvasRenderingContext2D(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static void put(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::JSValue, JSC::PutPropertySlot&);
    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    static JSC::JSValue getConstructor(JSC::VM&, JSC::JSGlobalObject*);

    // Custom attributes
    JSC::JSValue webkitLineDash(JSC::ExecState*) const;
    void setWebkitLineDash(JSC::ExecState*, JSC::JSValue);
    JSC::JSValue strokeStyle(JSC::ExecState*) const;
    void setStrokeStyle(JSC::ExecState*, JSC::JSValue);
    JSC::JSValue fillStyle(JSC::ExecState*) const;
    void setFillStyle(JSC::ExecState*, JSC::JSValue);
    CanvasRenderingContext2D& impl() const
    {
        return static_cast<CanvasRenderingContext2D&>(Base::impl());
    }
protected:
    JSCanvasRenderingContext2D(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<CanvasRenderingContext2D>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};


class JSCanvasRenderingContext2DPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::VM&, JSC::JSGlobalObject*);
    static JSCanvasRenderingContext2DPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSCanvasRenderingContext2DPrototype* ptr = new (NotNull, JSC::allocateCell<JSCanvasRenderingContext2DPrototype>(vm.heap)) JSCanvasRenderingContext2DPrototype(vm, globalObject, structure);
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
    JSCanvasRenderingContext2DPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSCanvasRenderingContext2DConstructor : public DOMConstructorObject {
private:
    JSCanvasRenderingContext2DConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSCanvasRenderingContext2DConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSCanvasRenderingContext2DConstructor* ptr = new (NotNull, JSC::allocateCell<JSCanvasRenderingContext2DConstructor>(vm.heap)) JSCanvasRenderingContext2DConstructor(structure, globalObject);
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
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionSave(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionRestore(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionScale(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionRotate(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionTranslate(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionTransform(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionSetTransform(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionCreateLinearGradient(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionCreateRadialGradient(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionSetLineDash(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionGetLineDash(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionClearRect(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionFillRect(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionBeginPath(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionClosePath(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionMoveTo(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionLineTo(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionQuadraticCurveTo(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionBezierCurveTo(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionArcTo(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionRect(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionArc(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionFill(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionStroke(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionClip(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionIsPointInPath(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionIsPointInStroke(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionMeasureText(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionSetAlpha(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionSetCompositeOperation(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionSetLineWidth(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionSetLineCap(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionSetLineJoin(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionSetMiterLimit(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionClearShadow(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionFillText(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionStrokeText(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionSetStrokeColor(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionSetFillColor(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionStrokeRect(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionDrawImage(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionDrawImageFromRect(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionSetShadow(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionPutImageData(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionWebkitPutImageDataHD(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionCreatePattern(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionCreateImageData(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionGetImageData(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionWebkitGetImageDataHD(JSC::ExecState*);
// Attributes

JSC::EncodedJSValue jsCanvasRenderingContext2DGlobalAlpha(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
void setJSCanvasRenderingContext2DGlobalAlpha(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsCanvasRenderingContext2DGlobalCompositeOperation(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
void setJSCanvasRenderingContext2DGlobalCompositeOperation(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsCanvasRenderingContext2DLineWidth(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
void setJSCanvasRenderingContext2DLineWidth(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsCanvasRenderingContext2DLineCap(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
void setJSCanvasRenderingContext2DLineCap(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsCanvasRenderingContext2DLineJoin(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
void setJSCanvasRenderingContext2DLineJoin(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsCanvasRenderingContext2DMiterLimit(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
void setJSCanvasRenderingContext2DMiterLimit(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsCanvasRenderingContext2DShadowOffsetX(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
void setJSCanvasRenderingContext2DShadowOffsetX(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsCanvasRenderingContext2DShadowOffsetY(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
void setJSCanvasRenderingContext2DShadowOffsetY(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsCanvasRenderingContext2DShadowBlur(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
void setJSCanvasRenderingContext2DShadowBlur(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsCanvasRenderingContext2DShadowColor(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
void setJSCanvasRenderingContext2DShadowColor(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsCanvasRenderingContext2DLineDashOffset(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
void setJSCanvasRenderingContext2DLineDashOffset(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsCanvasRenderingContext2DWebkitLineDash(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
void setJSCanvasRenderingContext2DWebkitLineDash(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsCanvasRenderingContext2DWebkitLineDashOffset(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
void setJSCanvasRenderingContext2DWebkitLineDashOffset(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsCanvasRenderingContext2DCurrentPath(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
void setJSCanvasRenderingContext2DCurrentPath(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsCanvasRenderingContext2DFont(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
void setJSCanvasRenderingContext2DFont(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsCanvasRenderingContext2DTextAlign(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
void setJSCanvasRenderingContext2DTextAlign(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsCanvasRenderingContext2DTextBaseline(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
void setJSCanvasRenderingContext2DTextBaseline(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsCanvasRenderingContext2DStrokeStyle(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
void setJSCanvasRenderingContext2DStrokeStyle(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsCanvasRenderingContext2DFillStyle(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
void setJSCanvasRenderingContext2DFillStyle(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsCanvasRenderingContext2DWebkitBackingStorePixelRatio(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsCanvasRenderingContext2DWebkitImageSmoothingEnabled(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
void setJSCanvasRenderingContext2DWebkitImageSmoothingEnabled(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsCanvasRenderingContext2DConstructor(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);

} // namespace WebCore

#endif
