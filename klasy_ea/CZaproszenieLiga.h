///////////////////////////////////////////////////////////
//  CZaproszenieLiga.h
//  Implementation of the Class CZaproszenieLiga
//  Created on:      15-sty-2019 02:12:02
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_6E1E4299_28D7_47db_8AEC_603A5FABB6BA__INCLUDED_)
#define EA_6E1E4299_28D7_47db_8AEC_603A5FABB6BA__INCLUDED_

#include "CLiga.h"
#include "CDruzyna.h"

class CZaproszenieLiga
{

public:
	CZaproszenieLiga();
	virtual ~CZaproszenieLiga();
	CLiga *m_CLiga;
	CDruzyna *m_CDruzyna;

private:
	DateTime dataUtworzenia;
	CDruzyna* druzyna;
	CLiga* liga;

};
#endif // !defined(EA_6E1E4299_28D7_47db_8AEC_603A5FABB6BA__INCLUDED_)
