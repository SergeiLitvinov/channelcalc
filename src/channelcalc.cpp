#include "FormHandler.h"


///////////////////////////////////////////////////////////////////////////
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

class MyApp: public wxApp
{
public:
    virtual bool OnInit();
};
wxIMPLEMENT_APP(MyApp);
bool MyApp::OnInit()
{

    FormHandler *form = new FormHandler(NULL, wxID_ANY, wxT("ChannelCalc") );
	form->Show(true);
    return true;
}

