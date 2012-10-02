/***************************************************************
 * Name:      PuntajesMinimosApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Andrés Ricardo Torres Martínez (aritoma@gmail.com)
 * Created:   2012-02-12
 * Copyright: Andrés Ricardo Torres Martínez ()
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "PuntajesMinimosApp.h"
#include "PuntajesMinimosMain.h"

IMPLEMENT_APP(PuntajesMinimosApp);

bool PuntajesMinimosApp::OnInit()
{
    PuntajesMinimosFrame* frame = new PuntajesMinimosFrame(0L);

    frame->Show();

    return true;
}