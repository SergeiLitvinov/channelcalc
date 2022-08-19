///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/statusbr.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/stattext.h>
#include <wx/combobox.h>
#include <wx/textctrl.h>
#include <wx/valtext.h>
#include <wx/dynarray.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MainFrame
///////////////////////////////////////////////////////////////////////////////
class MainFrame : public wxFrame
{
	private:

	protected:
		wxStatusBar* m_statusBar1;
		wxMenuBar* m_menubar1;
		wxMenu* m_menu1;
		wxMenu* m_menu3;
		wxStaticText* m_staticText4;
		wxComboBox* m_comboBox4;
		wxStaticText* m_staticText2;
		wxTextCtrl* m_textCtrl1;
		wxStaticText* m_staticText3;
		wxStaticText* m_staticText41;
		wxTextCtrl* m_textCtrl2;
		wxStaticText* m_staticText5;
		wxStaticText* m_staticText6;
		wxTextCtrl* m_textCtrl4;
		wxStaticText* m_staticText7;
		wxStaticText* m_staticText8;
		wxTextCtrl* m_textCtrl8;
		wxStaticText* m_staticText16;
		wxStaticBitmap* m_bitmap1;
		wxStaticText* m_staticText9;
		wxTextCtrl* m_textCtrl10;
		wxStaticText* m_staticText18;
		wxStaticText* m_staticText11;
		wxTextCtrl* m_textCtrl5;
		wxStaticText* m_staticText12;
		wxStaticText* m_staticText13;
		wxComboBox* m_comboBox2;
		wxStaticText* m_staticText10;
		wxTextCtrl* m_textCtrl41;
		wxStaticText* m_staticText14;
		wxTextCtrl* m_textCtrl6;
		wxStaticText* m_staticText15;

		// Virtual event handlers, override them in your derived class
		virtual void ProductSelect( wxCommandEvent& event ) { event.Skip(); }
		virtual void U1rmsEnter( wxCommandEvent& event ) { event.Skip(); }
		virtual void R1Enter( wxCommandEvent& event ) { event.Skip(); }
		virtual void R2Enter( wxCommandEvent& event ) { event.Skip(); }
		virtual void U2Calc( wxCommandEvent& event ) { event.Skip(); }
		virtual void KyCalc( wxCommandEvent& event ) { event.Skip(); }
		virtual void RocCalc( wxCommandEvent& event ) { event.Skip(); }


	public:
		wxString inputU1rms;
		wxString inputR1;
		wxString inputR2;

		MainFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("ui"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1500,1200 ), long style = wxDEFAULT_FRAME_STYLE|wxMAXIMIZE|wxTAB_TRAVERSAL, const wxString& name = wxT("ui") );

		~MainFrame();

};

