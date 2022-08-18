#include "DataView.h"
#include "Calculation.hpp"

// Был использован конструктор using

/* DataView::DataView( wxWindow* parent )
:
MyFrame1( parent )
{

}  */

void DataView::ProductSelect( wxCommandEvent& event )
{
// TODO: Implement ProductSelect
}

void DataView::U1rmsEnter( wxCommandEvent& event )
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

        wxString num_Ky = wxString::Format(wxT("%f"), calcdata.rutine().Ky);
        m_textCtrl41->SetValue(num_Ky);

        wxString num_Roc = wxString::Format(wxT("%f"), calcdata.rutine().Roc);
        m_textCtrl6->SetValue(num_Roc);
    }
};

void DataView::R1Enter( wxCommandEvent& event )
{
// TODO: Implement R1Enter

    wxTextCtrl *TextString = (wxTextCtrl *) event.GetEventObject();
    std::string stlstring = std::string(TextString->GetValue().mb_str());

    if (calcdata.setR1(stlstring))
    {
        wxString num_U2 = wxString::Format(wxT("%f"), calcdata.rutine().U2);
        m_textCtrl10->SetValue(num_U2);

        wxString num_Ky = wxString::Format(wxT("%f"), calcdata.rutine().Ky);
        m_textCtrl41->SetValue(num_Ky);

        wxString num_Roc = wxString::Format(wxT("%f"), calcdata.rutine().Roc);
        m_textCtrl6->SetValue(num_Roc);
    }
};

void DataView::R2Enter( wxCommandEvent& event )
{
// TODO: Implement R2Enter

    wxTextCtrl *TextString = (wxTextCtrl *) event.GetEventObject();
    std::string stlstring = std::string(TextString->GetValue().mb_str());

    if (calcdata.setR2(stlstring))
    {
        wxString num_U2 = wxString::Format(wxT("%f"), calcdata.rutine().U2);
        m_textCtrl10->SetValue(num_U2);

        wxString num_Ky = wxString::Format(wxT("%f"), calcdata.rutine().Ky);
        m_textCtrl41->SetValue(num_Ky);

        wxString num_Roc = wxString::Format(wxT("%f"), calcdata.rutine().Roc);
        m_textCtrl6->SetValue(num_Roc);
    }
};

void DataView::U2Calc( wxCommandEvent& event )
{
// TODO: Implement U1mCulc
    
};

void DataView::KyCalc( wxCommandEvent& event )
{
// TODO: Implement U1mCulc
    
};

void DataView::RocCalc( wxCommandEvent& event )
{
// TODO: Implement U1mCulc
    
};