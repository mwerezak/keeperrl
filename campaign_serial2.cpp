#include "stdafx.h"
#include "campaign.h"

// Workaround for a bug in Visual Studio involving template functions

void serialize2(InputArchive& ar, Table<Campaign::SiteInfo>& t) {
  // SERIAL(t)
  ar & SVAR(t);
}
