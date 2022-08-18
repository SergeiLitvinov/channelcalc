///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "mainwindow.h"
#include "delitel2.bmp.h"
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

MyFrame1::MyFrame1( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxFrame( parent, id, title, pos, size, style, name )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_MENU ) );

	m_statusBar1 = this->CreateStatusBar( 1, wxSTB_SIZEGRIP, wxID_ANY );
	m_menubar1 = new wxMenuBar( 0 );
	m_menu1 = new wxMenu();
	wxMenuItem* m_menuItem2;
	m_menuItem2 = new wxMenuItem( m_menu1, wxID_ANY, wxString( wxT("Выход") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu1->Append( m_menuItem2 );

	m_menubar1->Append( m_menu1, wxT("Файл") );

	m_menu3 = new wxMenu();
	wxMenuItem* m_menuItem6;
	m_menuItem6 = new wxMenuItem( m_menu3, wxID_ANY, wxString( wxT("О программе") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu3->Append( m_menuItem6 );

	m_menubar1->Append( m_menu3, wxT("Помощь") );

	this->SetMenuBar( m_menubar1 );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer4;
	fgSizer4 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer4->SetFlexibleDirection( wxBOTH );
	fgSizer4->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("Выберите тип устройства"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	fgSizer4->Add( m_staticText4, 0, wxALL, 5 );

	m_comboBox4 = new wxComboBox( this, wxID_ANY, wxT("ЦКТТН 6-35 кВ (питание от СОПТ)"), wxDefaultPosition, wxSize( 300,-1 ), 0, NULL, 0 );
	m_comboBox4->Append( wxT("ЦКТТН 6-35 кВ (питание от СОПТ)") );
	m_comboBox4->Append( wxT("ЦКТТН 6-36 кВ (питание от линии)") );
	m_comboBox4->Append( wxT("ЦКТТН 110 кВ (питание от СОПТ)") );
	m_comboBox4->Append( wxT("АТКУЭ 6-35 кВ") );
	m_comboBox4->SetSelection( 0 );
	fgSizer4->Add( m_comboBox4, 0, wxALL, 5 );

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("Введите действующее значение  первичного напряжения, U1rms="), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	bSizer5->Add( m_staticText2, 0, wxALL, 5 );

	m_textCtrl1 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_textCtrl1, 0, wxALL, 5 );

	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("В"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	bSizer5->Add( m_staticText3, 0, wxALL, 5 );


	fgSizer4->Add( bSizer5, 1, wxEXPAND, 5 );


	fgSizer4->Add( 0, 0, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText41 = new wxStaticText( this, wxID_ANY, wxT("Введите сопротивление  верхнего плеча делителя напряжения R1="), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText41->Wrap( -1 );
	bSizer10->Add( m_staticText41, 0, wxALL, 5 );

	m_textCtrl2 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( m_textCtrl2, 0, wxALL, 5 );

	m_staticText5 = new wxStaticText( this, wxID_ANY, wxT("Ом"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	bSizer10->Add( m_staticText5, 0, wxALL, 5 );


	fgSizer4->Add( bSizer10, 1, wxEXPAND, 5 );


	fgSizer4->Add( 0, 0, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText6 = new wxStaticText( this, wxID_ANY, wxT("Введите сопротивление  нижнего плеча делителя напряжения R2="), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	bSizer12->Add( m_staticText6, 0, wxALL, 5 );

	m_textCtrl4 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( m_textCtrl4, 0, wxALL, 5 );

	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("Ом"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	bSizer12->Add( m_staticText7, 0, wxALL, 5 );


	fgSizer4->Add( bSizer12, 1, wxEXPAND, 5 );


	fgSizer4->Add( 0, 0, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer51;
	bSizer51 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText8 = new wxStaticText( this, wxID_ANY, wxT("U1m"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	bSizer51->Add( m_staticText8, 0, wxALL, 5 );

	m_textCtrl8 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl8->SetFont( wxFont( 9, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_textCtrl8->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	m_textCtrl8->Enable( false );

	bSizer51->Add( m_textCtrl8, 0, wxALL, 5 );

	m_staticText16 = new wxStaticText( this, wxID_ANY, wxT("В"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText16->Wrap( -1 );
	bSizer51->Add( m_staticText16, 0, wxALL, 5 );

	m_bitmap1 = new wxStaticBitmap( this, wxID_ANY, delitel2_bmp_to_wx_bitmap(), wxDefaultPosition, wxDefaultSize, 0 );
	m_bitmap1->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_MENU ) );

	bSizer51->Add( m_bitmap1, 0, wxALL, 5 );

	m_staticText9 = new wxStaticText( this, wxID_ANY, wxT("U2="), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	bSizer51->Add( m_staticText9, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl10 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl10->SetFont( wxFont( 9, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_textCtrl10->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	m_textCtrl10->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	m_textCtrl10->Enable( false );

	bSizer51->Add( m_textCtrl10, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText18 = new wxStaticText( this, wxID_ANY, wxT("В"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText18->Wrap( -1 );
	bSizer51->Add( m_staticText18, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	fgSizer4->Add( bSizer51, 0, wxALIGN_CENTER, 5 );


	fgSizer4->Add( 0, 0, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("Введите значение сопротивление на входе усилителя, R="), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	m_staticText11->Hide();

	bSizer6->Add( m_staticText11, 0, wxALL, 5 );

	m_textCtrl5 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl5->Hide();

	bSizer6->Add( m_textCtrl5, 0, wxALL, 5 );

	m_staticText12 = new wxStaticText( this, wxID_ANY, wxT("Ом"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	m_staticText12->Hide();

	bSizer6->Add( m_staticText12, 0, wxALL, 5 );


	fgSizer4->Add( bSizer6, 1, wxEXPAND, 5 );


	fgSizer4->Add( 0, 0, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText13 = new wxStaticText( this, wxID_ANY, wxT("Выберите программируемый предел АЦП"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	m_staticText13->Hide();

	bSizer8->Add( m_staticText13, 0, wxALL, 5 );

	m_comboBox2 = new wxComboBox( this, wxID_ANY, wxT("2.56"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBox2->Append( wxT("2.56") );
	m_comboBox2->Append( wxT("5.12") );
	m_comboBox2->Append( wxT("6.144") );
	m_comboBox2->Append( wxT("10.24") );
	m_comboBox2->Append( wxT("12.288") );
	m_comboBox2->Append( wxEmptyString );
	m_comboBox2->Append( wxEmptyString );
	m_comboBox2->SetSelection( 0 );
	m_comboBox2->Hide();

	bSizer8->Add( m_comboBox2, 0, wxALL, 5 );


	fgSizer4->Add( bSizer8, 1, wxEXPAND, 5 );


	fgSizer4->Add( 0, 0, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText10 = new wxStaticText( this, wxID_ANY, wxT("Kу="), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	bSizer7->Add( m_staticText10, 0, wxALL, 5 );

	m_textCtrl41 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl41->SetFont( wxFont( 9, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_textCtrl41->Enable( false );

	bSizer7->Add( m_textCtrl41, 0, wxALL, 5 );


	fgSizer4->Add( bSizer7, 1, wxEXPAND, 5 );


	fgSizer4->Add( 0, 0, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText14 = new wxStaticText( this, wxID_ANY, wxT("Искомое сопротивление обратной связи, Rо.с.="), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText14->Wrap( -1 );
	bSizer9->Add( m_staticText14, 0, wxALL, 5 );

	m_textCtrl6 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl6->SetFont( wxFont( 9, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_textCtrl6->Enable( false );

	bSizer9->Add( m_textCtrl6, 0, wxALL, 5 );

	m_staticText15 = new wxStaticText( this, wxID_ANY, wxT("Ом"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText15->Wrap( -1 );
	bSizer9->Add( m_staticText15, 0, wxALL, 5 );


	fgSizer4->Add( bSizer9, 1, wxEXPAND, 5 );


	bSizer3->Add( fgSizer4, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer3 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_comboBox4->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( MyFrame1::ProductSelect ), NULL, this );
	m_textCtrl1->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::U1rmsEnter ), NULL, this );
	m_textCtrl2->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::R1Enter ), NULL, this );
	m_textCtrl4->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::R2Enter ), NULL, this );
	m_textCtrl10->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::U2Calc ), NULL, this );
	m_textCtrl41->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::KyCalc ), NULL, this );
	m_textCtrl6->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::RocCalc ), NULL, this );
}

MyFrame1::~MyFrame1()
{
	// Disconnect 
	m_comboBox4->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( MyFrame1::ProductSelect ), NULL, this );
	m_textCtrl1->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::U1rmsEnter ), NULL, this );
	m_textCtrl2->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::R1Enter ), NULL, this );
	m_textCtrl4->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::R2Enter ), NULL, this );
	m_textCtrl10->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::U2Calc ), NULL, this );
	m_textCtrl41->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::KyCalc ), NULL, this );
	m_textCtrl6->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::RocCalc ), NULL, this );
}