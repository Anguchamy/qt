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

#include "JSSVGPathSegLinetoRel.h"

#include "SVGPathSegLineto.h"
#include <runtime/JSNumberCell.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGPathSegLinetoRel);

/* Hash table */

static const HashTableValue JSSVGPathSegLinetoRelTableValues[3] =
{
    { "x", DontDelete, (intptr_t)jsSVGPathSegLinetoRelX, (intptr_t)setJSSVGPathSegLinetoRelX },
    { "y", DontDelete, (intptr_t)jsSVGPathSegLinetoRelY, (intptr_t)setJSSVGPathSegLinetoRelY },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGPathSegLinetoRelTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 1, JSSVGPathSegLinetoRelTableValues, 0 };
#else
    { 4, 3, JSSVGPathSegLinetoRelTableValues, 0 };
#endif

/* Hash table for prototype */

static const HashTableValue JSSVGPathSegLinetoRelPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGPathSegLinetoRelPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGPathSegLinetoRelPrototypeTableValues, 0 };
#else
    { 1, 0, JSSVGPathSegLinetoRelPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGPathSegLinetoRelPrototype::s_info = { "SVGPathSegLinetoRelPrototype", 0, &JSSVGPathSegLinetoRelPrototypeTable, 0 };

JSObject* JSSVGPathSegLinetoRelPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGPathSegLinetoRel>(exec, globalObject);
}

const ClassInfo JSSVGPathSegLinetoRel::s_info = { "SVGPathSegLinetoRel", &JSSVGPathSeg::s_info, &JSSVGPathSegLinetoRelTable, 0 };

JSSVGPathSegLinetoRel::JSSVGPathSegLinetoRel(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPathSegLinetoRel> impl, SVGElement* context)
    : JSSVGPathSeg(structure, globalObject, impl, context)
{
}

JSObject* JSSVGPathSegLinetoRel::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGPathSegLinetoRelPrototype(JSSVGPathSegLinetoRelPrototype::createStructure(JSSVGPathSegPrototype::self(exec, globalObject)));
}

bool JSSVGPathSegLinetoRel::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegLinetoRel, Base>(exec, &JSSVGPathSegLinetoRelTable, this, propertyName, slot);
}

bool JSSVGPathSegLinetoRel::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPathSegLinetoRel, Base>(exec, &JSSVGPathSegLinetoRelTable, this, propertyName, descriptor);
}

JSValue jsSVGPathSegLinetoRelX(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGPathSegLinetoRel* castedThis = static_cast<JSSVGPathSegLinetoRel*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGPathSegLinetoRel* imp = static_cast<SVGPathSegLinetoRel*>(castedThis->impl());
    return jsNumber(exec, imp->x());
}

JSValue jsSVGPathSegLinetoRelY(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGPathSegLinetoRel* castedThis = static_cast<JSSVGPathSegLinetoRel*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGPathSegLinetoRel* imp = static_cast<SVGPathSegLinetoRel*>(castedThis->impl());
    return jsNumber(exec, imp->y());
}

void JSSVGPathSegLinetoRel::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSSVGPathSegLinetoRel, Base>(exec, propertyName, value, &JSSVGPathSegLinetoRelTable, this, slot);
}

void setJSSVGPathSegLinetoRelX(ExecState* exec, JSObject* thisObject, JSValue value)
{
    SVGPathSegLinetoRel* imp = static_cast<SVGPathSegLinetoRel*>(static_cast<JSSVGPathSegLinetoRel*>(thisObject)->impl());
    imp->setX(value.toFloat(exec));
    if (static_cast<JSSVGPathSegLinetoRel*>(thisObject)->context())
        static_cast<JSSVGPathSegLinetoRel*>(thisObject)->context()->svgAttributeChanged(static_cast<JSSVGPathSegLinetoRel*>(thisObject)->impl()->associatedAttributeName());
}

void setJSSVGPathSegLinetoRelY(ExecState* exec, JSObject* thisObject, JSValue value)
{
    SVGPathSegLinetoRel* imp = static_cast<SVGPathSegLinetoRel*>(static_cast<JSSVGPathSegLinetoRel*>(thisObject)->impl());
    imp->setY(value.toFloat(exec));
    if (static_cast<JSSVGPathSegLinetoRel*>(thisObject)->context())
        static_cast<JSSVGPathSegLinetoRel*>(thisObject)->context()->svgAttributeChanged(static_cast<JSSVGPathSegLinetoRel*>(thisObject)->impl()->associatedAttributeName());
}


}

#endif // ENABLE(SVG)
