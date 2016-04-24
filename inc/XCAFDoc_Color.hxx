// Created on: 2000-08-16
// Created by: data exchange team
// Copyright (c) 2000-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#ifndef _XCAFDoc_Color_HeaderFile
#define _XCAFDoc_Color_HeaderFile

#include <Standard.hxx>
#include <Standard_Type.hxx>

#include <Quantity_Color.hxx>
#include <TDF_Attribute.hxx>
#include <Quantity_NameOfColor.hxx>
#include <Standard_Real.hxx>
class Standard_GUID;
class TDF_Label;
class Quantity_Color;
class TDF_Attribute;
class TDF_RelocationTable;


class XCAFDoc_Color;
DEFINE_STANDARD_HANDLE(XCAFDoc_Color, TDF_Attribute)

//! attribute to store color
class XCAFDoc_Color : public TDF_Attribute
{

public:

  
  Standard_EXPORT XCAFDoc_Color();
  
  Standard_EXPORT static const Standard_GUID& GetID();
  
  Standard_EXPORT static Handle(XCAFDoc_Color) Set (const TDF_Label& label, const Quantity_Color& C);
  
  Standard_EXPORT static Handle(XCAFDoc_Color) Set (const TDF_Label& label, const Quantity_NameOfColor C);
  
  //! Find, or create, a Color attribute and set it's value
  //! the Color attribute is returned.
  Standard_EXPORT static Handle(XCAFDoc_Color) Set (const TDF_Label& label, const Standard_Real R, const Standard_Real G, const Standard_Real B);
  
  Standard_EXPORT void Set (const Quantity_Color& C);
  
  Standard_EXPORT void Set (const Quantity_NameOfColor C);
  
  Standard_EXPORT void Set (const Standard_Real R, const Standard_Real G, const Standard_Real B);
  
  Standard_EXPORT const Quantity_Color& GetColor() const;
  
  Standard_EXPORT Quantity_NameOfColor GetNOC() const;
  
  //! Returns True if there is a reference on the same label
  Standard_EXPORT void GetRGB (Standard_Real& R, Standard_Real& G, Standard_Real& B) const;
  
  Standard_EXPORT const Standard_GUID& ID() const Standard_OVERRIDE;
  
  Standard_EXPORT void Restore (const Handle(TDF_Attribute)& With) Standard_OVERRIDE;
  
  Standard_EXPORT Handle(TDF_Attribute) NewEmpty() const Standard_OVERRIDE;
  
  Standard_EXPORT void Paste (const Handle(TDF_Attribute)& Into, const Handle(TDF_RelocationTable)& RT) const Standard_OVERRIDE;




  DEFINE_STANDARD_RTTIEXT(XCAFDoc_Color,TDF_Attribute)

protected:




private:


  Quantity_Color myColor;


};







#endif // _XCAFDoc_Color_HeaderFile