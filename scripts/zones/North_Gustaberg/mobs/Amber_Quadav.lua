-----------------------------------	
-- Area: North Gustaberg	
-- MOB:  Amber Quadav	
-----------------------------------	
	
require("scripts/globals/fieldsofvalor");	
	
-----------------------------------	
-- onMobDeath	
-----------------------------------	
	
function onMobDeath(mob,killer)	
	checkRegime(killer,mob,19,1);
	checkRegime(killer,mob,59,1);
end;	
