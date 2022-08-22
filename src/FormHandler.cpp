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

if (index == 0)
{   
    m_staticText11->Show();
    m_textCtrl5->Show();
    m_staticText12->Show();
    m_staticText13->Hide();
    m_comboBox2->Hide();
    m_staticText181->Hide();

    wxWindow::Layout();
    wxWindow::Refresh();
    wxWindow::Update();

    calcdata.setU1rms(std::string(m_textCtrl1->GetValue().mb_str()));
    calcdata.setR1(std::string(m_textCtrl2->GetValue().mb_str()));
    calcdata.setR2(std::string(m_textCtrl4->GetValue().mb_str()));
    calcdata.setR(std::string(m_textCtrl5->GetValue().mb_str()));
    m_textCtrl41->SetValue(wxString::Format(wxT("%f"), calcdata.rutineDCVTMiddleVoltageDCSupply().Kgaincom));
    m_textCtrl6->SetValue(wxString::Format(wxT("%f"), calcdata.rutineDCVTMiddleVoltageDCSupply().Rfbnoninvert));
}

else if (index == 1)
{
    m_staticText11->Hide();
    m_textCtrl5->Hide();
    m_staticText12->Hide();
    m_staticText13->Hide();
    m_comboBox2->Hide();
    m_staticText181->Show();

    wxWindow::Layout();
    wxWindow::Refresh();
    wxWindow::Update();

    calcdata.setU1rms(std::string(m_textCtrl1->GetValue().mb_str()));
    calcdata.setR1(std::string(m_textCtrl2->GetValue().mb_str()));
    calcdata.setR2(std::string(m_textCtrl4->GetValue().mb_str()));
    m_textCtrl41->SetValue(wxString::Format(wxT("%f"), calcdata.rutineDCVTMiddleHighVoltageLineDCSupply().Kgainins));
    m_textCtrl6->SetValue(wxString::Format(wxT("%f"), calcdata.rutineDCVTMiddleHighVoltageLineDCSupply().Rfbnoninvert));
}

else if (index == 2)
{
    m_staticText181->Hide();
    m_staticText11->Show();
    m_textCtrl5->Show();
    m_staticText12->Show();
    m_staticText13->Show();
    m_comboBox2->Show();

    wxWindow::Layout();
    wxWindow::Refresh();
    wxWindow::Update();

    calcdata.setU1rms(std::string(m_textCtrl1->GetValue().mb_str()));
    calcdata.setR1(std::string(m_textCtrl2->GetValue().mb_str()));
    calcdata.setR2(std::string(m_textCtrl4->GetValue().mb_str()));
    calcdata.setR(std::string(m_textCtrl5->GetValue().mb_str()));
    calcdata.setADCVoltage(std::string(m_comboBox2->GetValue().mb_str()));
    m_textCtrl41->SetValue(wxString::Format(wxT("%f"), calcdata.rutineATKUEmiddleVoltage().Kgaincom));
    m_textCtrl6->SetValue(wxString::Format(wxT("%f"), calcdata.rutineATKUEmiddleVoltage().Rfbnoninvert));
}

};

void FormHandler::ADCVoltageSelect( wxCommandEvent& event )
{
// TODO: Implement ADCVoltageSelect
    wxComboBox *SelectItem = (wxComboBox *) event.GetEventObject();
    std::string stlstring = std::string(SelectItem->GetValue().mb_str());
    
    if (calcdata.setADCVoltage(stlstring))
    {
    wxString num_Ky = wxString::Format(wxT("%f"), calcdata.rutineATKUEmiddleVoltage().Kgaincom);
    m_textCtrl41->SetValue(num_Ky);

    wxString num_Roc = wxString::Format(wxT("%f"), calcdata.rutineATKUEmiddleVoltage().Rfbnoninvert);
    m_textCtrl6->SetValue(num_Roc);
    }
};

void FormHandler::U1rmsEnter( wxCommandEvent& event )
{

// TODO: Implement U1rmsEnter
    
    wxTextCtrl *TextString = (wxTextCtrl *) event.GetEventObject();
    std::string stlstring = std::string(TextString->GetValue().mb_str());

    int index = m_comboBox4->GetSelection();

    if (index == 0)

    {
        if (calcdata.setU1rms(stlstring))
        {
        wxString num = wxString::Format(wxT("%f"), calcdata.rutineDCVTMiddleVoltageDCSupply().U1m);
        m_textCtrl8->SetValue(num);

        wxString num_U2 = wxString::Format(wxT("%f"), calcdata.rutineDCVTMiddleVoltageDCSupply().U2);
        m_textCtrl10->SetValue(num_U2);

        wxString num_Ky = wxString::Format(wxT("%f"), calcdata.rutineDCVTMiddleVoltageDCSupply().Kgaincom);
        m_textCtrl41->SetValue(num_Ky);

        wxString num_Roc = wxString::Format(wxT("%f"), calcdata.rutineDCVTMiddleVoltageDCSupply().Rfbnoninvert);
        m_textCtrl6->SetValue(num_Roc);
        }
    }

    else if (index == 1)
    {
        if (calcdata.setU1rms(stlstring))
        {
        wxString num = wxString::Format(wxT("%f"), calcdata.rutineDCVTMiddleHighVoltageLineDCSupply().U1m);
        m_textCtrl8->SetValue(num);

        wxString num_U2 = wxString::Format(wxT("%f"), calcdata.rutineDCVTMiddleHighVoltageLineDCSupply().U2);
        m_textCtrl10->SetValue(num_U2);

        wxString num_Ky = wxString::Format(wxT("%f"), calcdata.rutineDCVTMiddleHighVoltageLineDCSupply().Kgainins);
        m_textCtrl41->SetValue(num_Ky);

        wxString num_Roc = wxString::Format(wxT("%f"), calcdata.rutineDCVTMiddleHighVoltageLineDCSupply().Rfbnoninvert);
        m_textCtrl6->SetValue(num_Roc);
        }
    }

    else if (index == 2)
    {
        if (calcdata.setU1rms(stlstring))
        {
        wxString num = wxString::Format(wxT("%f"), calcdata.rutineATKUEmiddleVoltage().U1m);
        m_textCtrl8->SetValue(num);

        wxString num_U2 = wxString::Format(wxT("%f"), calcdata.rutineATKUEmiddleVoltage().U2);
        m_textCtrl10->SetValue(num_U2);

        wxString num_Ky = wxString::Format(wxT("%f"), calcdata.rutineATKUEmiddleVoltage().Kgaincom);
        m_textCtrl41->SetValue(num_Ky);

        wxString num_Roc = wxString::Format(wxT("%f"), calcdata.rutineATKUEmiddleVoltage().Rfbnoninvert);
        m_textCtrl6->SetValue(num_Roc);
        }
    }

};

void FormHandler::R1Enter( wxCommandEvent& event )
{
// TODO: Implement R1Enter

    wxTextCtrl *TextString = (wxTextCtrl *) event.GetEventObject();
    std::string stlstring = std::string(TextString->GetValue().mb_str());

    int index = m_comboBox4->GetSelection();

    if (index == 0)

    {
        if (calcdata.setR1(stlstring))
        {
        wxString num_U2 = wxString::Format(wxT("%f"), calcdata.rutineDCVTMiddleVoltageDCSupply().U2);
        m_textCtrl10->SetValue(num_U2);

        wxString num_Ky = wxString::Format(wxT("%f"), calcdata.rutineDCVTMiddleVoltageDCSupply().Kgaincom);
        m_textCtrl41->SetValue(num_Ky);

        wxString num_Roc = wxString::Format(wxT("%f"), calcdata.rutineDCVTMiddleVoltageDCSupply().Rfbnoninvert);
        m_textCtrl6->SetValue(num_Roc);
        }
    }

    else if (index == 1)
    {
        if (calcdata.setR1(stlstring))
        {
        wxString num_U2 = wxString::Format(wxT("%f"), calcdata.rutineDCVTMiddleHighVoltageLineDCSupply().U2);
        m_textCtrl10->SetValue(num_U2);

        wxString num_Ky = wxString::Format(wxT("%f"), calcdata.rutineDCVTMiddleHighVoltageLineDCSupply().Kgainins);
        m_textCtrl41->SetValue(num_Ky);

        wxString num_Roc = wxString::Format(wxT("%f"), calcdata.rutineDCVTMiddleHighVoltageLineDCSupply().Rfbnoninvert);
        m_textCtrl6->SetValue(num_Roc);
        }
    }

    else if (index == 2)
    {
        if (calcdata.setR1(stlstring))
        {
        wxString num_U2 = wxString::Format(wxT("%f"), calcdata.rutineATKUEmiddleVoltage().U2);
        m_textCtrl10->SetValue(num_U2);

        wxString num_Ky = wxString::Format(wxT("%f"), calcdata.rutineATKUEmiddleVoltage().Kgaincom);
        m_textCtrl41->SetValue(num_Ky);

        wxString num_Roc = wxString::Format(wxT("%f"), calcdata.rutineATKUEmiddleVoltage().Rfbnoninvert);
        m_textCtrl6->SetValue(num_Roc);
        }
    }
};

void FormHandler::R2Enter( wxCommandEvent& event )
{
// TODO: Implement R2Enter

    wxTextCtrl *TextString = (wxTextCtrl *) event.GetEventObject();
    std::string stlstring = std::string(TextString->GetValue().mb_str());

    int index = m_comboBox4->GetSelection();

    if (index == 0)

    {
        if (calcdata.setR2(stlstring))
        {
        wxString num_U2 = wxString::Format(wxT("%f"), calcdata.rutineDCVTMiddleVoltageDCSupply().U2);
        m_textCtrl10->SetValue(num_U2);

        wxString num_Ky = wxString::Format(wxT("%f"), calcdata.rutineDCVTMiddleVoltageDCSupply().Kgaincom);
        m_textCtrl41->SetValue(num_Ky);

        wxString num_Roc = wxString::Format(wxT("%f"), calcdata.rutineDCVTMiddleVoltageDCSupply().Rfbnoninvert);
        m_textCtrl6->SetValue(num_Roc);
        }
    }

    else if (index == 1)
    {
        if (calcdata.setR2(stlstring))
        {
        wxString num_U2 = wxString::Format(wxT("%f"), calcdata.rutineDCVTMiddleHighVoltageLineDCSupply().U2);
        m_textCtrl10->SetValue(num_U2);

        wxString num_Ky = wxString::Format(wxT("%f"), calcdata.rutineDCVTMiddleHighVoltageLineDCSupply().Kgainins);
        m_textCtrl41->SetValue(num_Ky);

        wxString num_Roc = wxString::Format(wxT("%f"), calcdata.rutineDCVTMiddleHighVoltageLineDCSupply().Rfbnoninvert);
        m_textCtrl6->SetValue(num_Roc);
        }
    }

    else if (index == 2)
    {
        if (calcdata.setR2(stlstring))
        {
        wxString num_U2 = wxString::Format(wxT("%f"), calcdata.rutineATKUEmiddleVoltage().U2);
        m_textCtrl10->SetValue(num_U2);

        wxString num_Ky = wxString::Format(wxT("%f"), calcdata.rutineATKUEmiddleVoltage().Kgaincom);
        m_textCtrl41->SetValue(num_Ky);

        wxString num_Roc = wxString::Format(wxT("%f"), calcdata.rutineATKUEmiddleVoltage().Rfbnoninvert);
        m_textCtrl6->SetValue(num_Roc);
        }
    }
};

void FormHandler::REnter( wxCommandEvent& event )
{
// TODO: Implement REnter

    wxTextCtrl *TextString = (wxTextCtrl *) event.GetEventObject();
    std::string stlstring = std::string(TextString->GetValue().mb_str());

    int index = m_comboBox4->GetSelection();

    if (index == 0)
    {
        if (calcdata.setR(stlstring))
        {
        wxString num_Ky = wxString::Format(wxT("%f"), calcdata.rutineDCVTMiddleVoltageDCSupply().Kgaincom);
        m_textCtrl41->SetValue(num_Ky);

        wxString num_Roc = wxString::Format(wxT("%f"), calcdata.rutineDCVTMiddleVoltageDCSupply().Rfbnoninvert);
        m_textCtrl6->SetValue(num_Roc);
    }

    }

    else if (index == 2)
    {
        if (calcdata.setR(stlstring))
        {
        wxString num_Ky = wxString::Format(wxT("%f"), calcdata.rutineATKUEmiddleVoltage().Kgaincom);
        m_textCtrl41->SetValue(num_Ky);

        wxString num_Roc = wxString::Format(wxT("%f"), calcdata.rutineATKUEmiddleVoltage().Rfbnoninvert);
        m_textCtrl6->SetValue(num_Roc);
    }

    }

    

};