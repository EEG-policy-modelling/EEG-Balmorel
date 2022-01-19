$ifi not %STEPCHARGSCHEME%==yes $goto STEPCHARGSCHEME_SET_END
set CHARGINGSTRAGEGY /dumb, smart, v2g/;
set cs(CHARGINGSTRAGEGY,Y);
cs('dumb',Y)$(Y.val =2020) = yes;
cs('dumb',Y)$(Y.val =2030) = yes;
cs('smart',Y)$(Y.val =2040) = yes;
cs('v2g',Y)$(Y.val =2050) = yes;

$label  STEPCHARGSCHEME_SET_END

$ifi not %MIXEDFLEET%==yes $goto MIXEDFLEET_SET_END
set CHARGINGSTRAGEGY /dumb, smart, v2g/;
set cs1(CHARGINGSTRAGEGY,Y);
cs1('dumb',Y)$(Y.val =2020) = yes;
cs1('dumb',Y)$(Y.val =2030) = yes;
cs1('dumb',Y)$(Y.val =2040) = yes;
cs1('smart',Y)$(Y.val =2050) = yes;

set cs2(CHARGINGSTRAGEGY,Y);
cs2('dumb',Y)$(Y.val =2020) = yes;
cs2('smart',Y)$(Y.val =2030) = yes;
cs2('smart',Y)$(Y.val =2040) = yes;
cs2('v2g',Y)$(Y.val =2050) = yes;


$label  MIXEDFLEET_SET_END

