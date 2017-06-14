// Created on: 2017-06-16
// Created by: Natalia ERMOLAEVA
// Copyright (c) 2017 OPEN CASCADE SAS
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

#include <VInspector_Communicator.hxx>

#include <VInspector_CallBack.hxx>
#include <VInspector_Window.hxx>

#include <AIS_InteractiveContext.hxx>

#include <QApplication>
#include <QDir>
#include <QLayout>
#include <QMainWindow>
#include <QWidget>

// =======================================================================
// function :  CreateCommunicator
// purpose : Creates a communicator by the library loading
// =======================================================================
Standard_EXPORTEXTERNC TInspectorAPI_Communicator* CreateCommunicator()
{
  return new VInspector_Communicator();
}

// =======================================================================
// function : Constructor
// purpose :
// =======================================================================
VInspector_Communicator::VInspector_Communicator()
: TInspectorAPI_Communicator(), myWindow (0)
{
  myWindow = new VInspector_Window();
}