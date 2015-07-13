-----------------------------------
-- Area: Dynamis Beaucidine
-- NPC:  ??? (qm9)
-- Involved Relic Bow
-- @pos 99 -20 132 134
-----------------------------------
package.loaded["scripts/zones/Ordelles_Caves/TextIDs"] = nil;
-----------------------------------

require("scripts/globals/settings");
require("scripts/zones/Ordelles_Caves/TextIDs");

-----------------------------------
-- onTrade Action
-----------------------------------

function onTrade(player,npc,trade)

		if(trade:hasItemQty(3363,1) and trade:getItemCount() == 1) then -- Trade Deluder's Fortune Parchment
			player:tradeComplete();
			SpawnMob(17326090,180):updateClaim(player);
		end

end;

-----------------------------------
-- onTrigger Action
-----------------------------------

function onTrigger(player,npc)
	player:messageSpecial(NOTHING_OUT_OF_ORDINARY);
end;

-----------------------------------
-- onEventUpdate
-----------------------------------

function onEventUpdate(player,csid,option)
--printf("CSID: %u",csid);
--printf("RESULT: %u",option);
end;

-----------------------------------
-- onEventFinish
-----------------------------------

function onEventFinish(player,csid,option)
--printf("CSID: %u",csid);
--printf("RESULT: %u",option);
end;