#pragma once
#include "RoundedRectangle.h"
#include "wx/wx.h"
#include <wx/hyperlink.h>
#include "RoundedButton.h"
#include "Assignment.h"
#include "MeroJob.h"

class InternshipCard : public RoundedRectangle
{
private:
	wxString label;
	wxHyperlinkCtrl* resultTitleText;
	wxFont* resultTitleFont;
	wxFont* resultContentFont;
	wxHyperlinkCtrl* companyName;
	wxStaticText* companyLocation;
	wxStaticText* deadline;
	wxBoxSizer* textSizer;
	RoundedButton* MoreDetails;
	RoundedButton* CompanyDetails;
	std::string sendURL;
public:
	InternshipCard(wxWindow* parent, MeroJob &m);
	void setData(std::string jobTitle = "N/A", std::string jobLink = "N/A",
		std::string companyTitle = "N/A", std::string companyLink = "N/A",
		std::string location = "N/A", std::string image = "N/A", std::string appdeadline = "N/A");
	void onButtonClick(wxCommandEvent& event, MeroJob &m);
	
};

