///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "DataView.h"


///////////////////////////////////////////////////////////////////////////
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

//Test testHandler;

class MyApp: public wxApp
{
public:
    virtual bool OnInit();
};
wxIMPLEMENT_APP(MyApp);
bool MyApp::OnInit()
{

    DataView *form = new DataView(NULL, wxID_ANY, wxT("ChannelCalc") );
	form->Show(true);
    return true;
}

