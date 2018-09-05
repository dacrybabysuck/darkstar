-----------------------------------
-- Area: Lufaise Meadows
--  NPC: Luck Rune
--  Involved in Quest: Mhaura Fortune
-- !pos 276.507 1.917 -139.961 24
-----------------------------------
package.loaded["scripts/zones/Lufaise_Meadows/TextIDs"] = nil;
-------------------------------------
require("scripts/zones/Lufaise_Meadows/TextIDs");
-----------------------------------

function onTrade(player,npc,trade)
end;

function onTrigger(player,npc)
    player:messageSpecial(NOTHING_OUT_OF_THE_ORDINARY);
end;

function onEventUpdate(player,csid,option)
end;

function onEventFinish(player,csid,option)
end;