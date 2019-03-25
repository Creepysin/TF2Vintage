#ifndef HEADLESS_HATMAN_DYING_H
#define HEADLESS_HATMAN_DYING_H
#ifdef _WIN32
#pragma once
#endif


#include "NextBotBehavior.h"
#include "headless_hatman.h"

class CHeadlessHatmanDying : public Action<CHeadlessHatman>
{
public:
	CHeadlessHatmanDying();
	virtual ~CHeadlessHatmanDying() { };

	virtual const char *GetName( void ) const override;

	virtual ActionResult<CHeadlessHatman> OnStart( CHeadlessHatman *me, Action<CHeadlessHatman> *priorAction ) override;
	virtual ActionResult<CHeadlessHatman> Update( CHeadlessHatman *me, float dt ) override;
};

#endif