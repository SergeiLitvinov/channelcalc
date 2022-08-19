#include "FormHandler.h"
#include "Calculation.hpp"

// Был использован конструктор using

/* FormHandler::FormHandler( wxWindow* parent )
:
MainFrame( parent )
{

}  */

void FormHandler::ProductSelect( wxCommandEvent& event )
{
// TODO: Implement ProductSelect
wxComboBox *SelectItem = (wxComboBox *) event.GetEventObject();
int index = SelectItem->GetSelection();
wxString mystring = wxString::Format(wxT("%i"), index);

if (index == 0)
{   
    m_staticText11->Show();
    m_textCtrl5->Show();
    m_staticText12->Show();
    wxWindow::Layout();
    wxWindow::Refresh();
    wxWindow::Update();
}

else if (index == 1)
{
    m_staticText11->Hide();
    m_textCtrl5->Hide();
    m_staticText12->Hide();
    wxWindow::Layout();
    wxWindow::Refresh();
    wxWindow::Update();
}

else if (index == 2)
{
    m_staticText11->Hide();
    m_textCtrl5->Hide();
    m_staticText12->Hide();
    wxWindow::Layout();
    wxWindow::Refresh();
    wxWindow::Update();
}

}

void FormHandler::U1rmsEnter( wxCommandEvent& event )
{

// TODO: Implement U1rmsEnter
    
    wxTextCtrl *TextString = (wxTextCtrl *) event.GetEventObject();
    std::string stlstring = std::string(TextString->GetValue().mb_str());

    if (calcdata.setU1rms(stlstring))
    {
        wxString num = wxString::Format(wxT("%f"), calcdata.rutine().U1m);
        m_textCtrl8->SetValue(num);

        wxString num_U2 = wxString::Format(wxT("%f"), calcdata.rutine().U2);
        m_textCtrl10->SetValue(num_U2);

        wxString num_Ky = wxString::Format(wxT("%f"), calcdata.rutine().Kgainins);
        m_textCtrl41->SetValue(num_Ky);

        wxString num_Roc = wxString::Format(wxT("%f"), calcdata.rutine().Rfbinvert);
        m_textCtrl6->SetValue(num_Roc);
    }
};

void FormHandler::R1Enter( wxCommandEvent& event )
{
// TODO: Implement R1Enter

    wxTextCtrl *TextString = (wxTextCtrl *) event.GetEventObject();
    std::string stlstring = std::string(TextString->GetValue().mb_str());

    if (calcdata.setR1(stlstring))
    {
        wxString num_U2 = wxString::Format(wxT("%f"), calcdata.rutine().U2);
        m_textCtrl10->SetValue(num_U2);

        wxString num_Ky = wxString::Format(wxT("%f"), calcdata.rutine().Kgainins);
        m_textCtrl41->SetValue(num_Ky);

        wxString num_Roc = wxString::Format(wxT("%f"), calcdata.rutine().Rfbinvert);
        m_textCtrl6->SetValue(num_Roc);
    }
};

void FormHandler::R2Enter( wxCommandEvent& event )
{
// TODO: Implement R2Enter

    wxTextCtrl *TextString = (wxTextCtrl *) event.GetEventObject();
    std::string stlstring = std::string(TextString->GetValue().mb_str());

    if (calcdata.setR2(stlstring))
    {
        wxString num_U2 = wxString::Format(wxT("%f"), calcdata.rutine().U2);
        m_textCtrl10->SetValue(num_U2);

        wxString num_Ky = wxString::Format(wxT("%f"), calcdata.rutine().Kgainins);
        m_textCtrl41->SetValue(num_Ky);

        wxString num_Roc = wxString::Format(wxT("%f"), calcdata.rutine().Rfbinvert);
        m_textCtrl6->SetValue(num_Roc);
    }
};

void FormHandler::U2Calc( wxCommandEvent& event )
{
// TODO: Implement U1mCulc
    
};

void FormHandler::KyCalc( wxCommandEvent& event )
{
// TODO: Implement U1mCulc
    
};

void FormHandler::RocCalc( wxCommandEvent& event )
{
// TODO: Implement U1mCulc
    
};