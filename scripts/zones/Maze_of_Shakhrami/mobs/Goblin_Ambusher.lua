-----------------------------------
-- Area: Maze of Shakhrami
--  MOB: Goblin Ambusher
-----------------------------------
require("scripts/globals/regimes")
-----------------------------------

function onMobDeath(mob, player, isKiller)
    dsp.regime.checkRegime(player, mob, 695, 1, dsp.regime.type.GROUNDS)
end;