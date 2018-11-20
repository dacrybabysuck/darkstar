-----------------------------------
-- Area: Promyvion Dem
-- ??? map acquisition
-----------------------------------
require("scripts/globals/keyitems");
local ID = require("scripts/zones/Promyvion-Dem/IDs");
-----------------------------------

function onTrigger(player,npc)
    player:messageSpecial(ID.text.NOTHING_OUT_OF_ORDINARY);
end;

function onTrade(player,npc,trade)
    if (trade:hasItemQty(1721,1) and trade:getItemCount() == 1 and player:hasKeyItem(dsp.ki.MAP_OF_PROMYVION_DEM) == false) then
        player:addKeyItem(dsp.ki.MAP_OF_PROMYVION_DEM);
        player:tradeComplete();
        player:messageSpecial(ID.text.KEYITEM_OBTAINED,dsp.ki.MAP_OF_PROMYVION_DEM);
    else
        player:messageSpecial(ID.text.NOTHING_HAPPENS);
    end
end;

function onEventUpdate(player,csid,option)
end

function onEventFinish(player,csid,option)
end;