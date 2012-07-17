/*
===========================================================================

  Copyright (c) 2010-2012 Darkstar Dev Teams

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see http://www.gnu.org/licenses/

  This file is part of DarkStar-server source code.

===========================================================================
*/

#include "../../common/socket.h"

#include <string.h>

#include "../charentity.h"
#include "../conquest_system.h"

#include "conquest_map.h"


CConquestPacket::CConquestPacket(CCharEntity * PChar) 
{
	this->type = 0x5E; 
	this->size = 0x5A;

	WBUFB(data,(0x04)-4) = conquest::GetBalance();

    WBUFL(data,(0x1A)-4) = 0x00801515 + 0x01000000 * (1 + conquest::GetRegionOwner(REGION_RONFAURE));
	WBUFL(data,(0x1E)-4) = 0x00801515 + 0x01000000 * (1 + conquest::GetRegionOwner(REGION_ZULKHEIM));
	WBUFL(data,(0x22)-4) = 0x00801515 + 0x01000000 * (1 + conquest::GetRegionOwner(REGION_NORVALLEN));
	WBUFL(data,(0x26)-4) = 0x00801515 + 0x01000000 * (1 + conquest::GetRegionOwner(REGION_GUSTABERG));
	WBUFL(data,(0x2A)-4) = 0x00801515 + 0x01000000 * (1 + conquest::GetRegionOwner(REGION_DERFLAND));
	WBUFL(data,(0x2E)-4) = 0x00801515 + 0x01000000 * (1 + conquest::GetRegionOwner(REGION_SARUTABARUTA));
	WBUFL(data,(0x32)-4) = 0x00801515 + 0x01000000 * (1 + conquest::GetRegionOwner(REGION_KOLSHUSHU));
	WBUFL(data,(0x36)-4) = 0x00801515 + 0x01000000 * (1 + conquest::GetRegionOwner(REGION_ARAGONEU));
	WBUFL(data,(0x3A)-4) = 0x00801515 + 0x01000000 * (1 + conquest::GetRegionOwner(REGION_FAUREGANDI));
	WBUFL(data,(0x3E)-4) = 0x00801515 + 0x01000000 * (1 + conquest::GetRegionOwner(REGION_VALDEAUNIA));
	WBUFL(data,(0x42)-4) = 0x00801515 + 0x01000000 * (1 + conquest::GetRegionOwner(REGION_QUFIMISLAND));
	WBUFL(data,(0x46)-4) = 0x00801515 + 0x01000000 * (1 + conquest::GetRegionOwner(REGION_LITELOR));
	WBUFL(data,(0x4A)-4) = 0x00801515 + 0x01000000 * (1 + conquest::GetRegionOwner(REGION_KUZOTZ));
	WBUFL(data,(0x4E)-4) = 0x00801515 + 0x01000000 * (1 + conquest::GetRegionOwner(REGION_VOLLBOW));
	WBUFL(data,(0x52)-4) = 0x00801515 + 0x01000000 * (1 + conquest::GetRegionOwner(REGION_ELSHIMOLOWLANDS));
	WBUFL(data,(0x56)-4) = 0x00801515 + 0x01000000 * (1 + conquest::GetRegionOwner(REGION_ELSHIMOUPLANDS));
	WBUFL(data,(0x5A)-4) = 0x00801515 + 0x01000000 * (1 + conquest::GetRegionOwner(REGION_TULIA));
	WBUFL(data,(0x5E)-4) = 0x00801515 + 0x01000000 * (1 + conquest::GetRegionOwner(REGION_MOVALPOLOS));
	WBUFL(data,(0x62)-4) = 0x00801515 + 0x01000000 * (1 + conquest::GetRegionOwner(REGION_TAVNAZIA));

	WBUFB(data,(0x8C)-4) = conquest::GetNexTally();
    WBUFL(data,(0x90)-4) = PChar->RegionPoints[PChar->profile.nation];
	WBUFB(data,(0x9C)-4) = 0x01;

	uint8 packet[] = 
    {
	    0x80, 0x78, 0x52, 0x03, 0x1a, 0x46, 0x04, 0x00, 0x42, 0x46, 0x04, 0x00, 0x65, 0x3d, 0x04, 0x00
    };
	memcpy(data+(0xA0)-4, &packet, 16);

	//WBUFL(data,(0xB0)-4) = PChar->GetImperialStandingPoints();
}
