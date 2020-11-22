* Include data for the EV addon
$if     EXIST '../data/EV_BEV_Dumb.inc' $INCLUDE      '../data/EV_BEV_Dumb.inc';
$if not EXIST '../data/EV_BEV_Dumb.inc'  $INCLUDE '../../base/data/EV_BEV_Dumb.inc';

$if     EXIST '../data/EV_BEV_SOCDumb.inc' $INCLUDE      '../data/EV_BEV_SOCDumb.inc';
$if not EXIST '../data/EV_BEV_SOCDumb.inc'  $INCLUDE '../../base/data/EV_BEV_SOCDumb.inc';

$if     EXIST '../data/EV_BEV_Flex.inc' $INCLUDE      '../data/EV_BEV_Flex.inc';
$if not EXIST '../data/EV_BEV_Flex.inc' $INCLUDE '../../base/data/EV_BEV_Flex.inc';

$if     EXIST '../data/EV_BEV_Inflex.inc' $INCLUDE         '../data/EV_BEV_Inflex.inc';
$if not EXIST '../data/EV_BEV_Inflex.inc' $INCLUDE '../../base/data/EV_BEV_Inflex.inc';

$if     EXIST '../data/EV_BEV_SOCFlex.inc' $INCLUDE         '../data/EV_BEV_SOCFlex.inc';
$if not EXIST '../data/EV_BEV_SOCFlex.inc' $INCLUDE '../../base/data/EV_BEV_SOCFlex.inc';

$if     EXIST '../data/EV_BEV_Avail.inc' $INCLUDE         '../data/EV_BEV_Avail.inc';
$if not EXIST '../data/EV_BEV_Avail.inc' $INCLUDE '../../base/data/EV_BEV_Avail.inc';

$if     EXIST '../data/EV_BEV_Max.inc' $INCLUDE         '../data/EV_BEV_Max.inc';
$if not EXIST '../data/EV_BEV_Max.inc' $INCLUDE '../../base/data/EV_BEV_Max.inc';

$if     EXIST '../data/EV_BEV_Min.inc' $INCLUDE         '../data/EV_BEV_Min.inc';
$if not EXIST '../data/EV_BEV_Min.inc' $INCLUDE '../../base/data/EV_BEV_Min.inc';


$if     EXIST '../data/EV_PHEV_Dumb.inc' $INCLUDE      '../data/EV_PHEV_Dumb.inc';
$if not EXIST '../data/EV_PHEV_Dumb.inc'  $INCLUDE '../../base/data/EV_PHEV_Dumb.inc';

$if     EXIST '../data/EV_PHEV_SOCDumb.inc' $INCLUDE      '../data/EV_PHEV_SOCDumb.inc';
$if not EXIST '../data/EV_PHEV_SOCDumb.inc'  $INCLUDE '../../base/data/EV_PHEV_SOCDumb.inc';

$if     EXIST '../data/EV_PHEV_Flex.inc' $INCLUDE      '../data/EV_PHEV_Flex.inc';
$if not EXIST '../data/EV_PHEV_Flex.inc' $INCLUDE '../../base/data/EV_PHEV_Flex.inc';

$if     EXIST '../data/EV_PHEV_Inflex.inc' $INCLUDE         '../data/EV_PHEV_Inflex.inc';
$if not EXIST '../data/EV_PHEV_Inflex.inc' $INCLUDE '../../base/data/EV_PHEV_Inflex.inc';

$if     EXIST '../data/EV_PHEV_SOCFlex.inc' $INCLUDE         '../data/EV_PHEV_SOCFlex.inc';
$if not EXIST '../data/EV_PHEV_SOCFlex.inc' $INCLUDE '../../base/data/EV_PHEV_SOCFlex.inc';

$if     EXIST '../data/EV_PHEV_Avail.inc' $INCLUDE         '../data/EV_PHEV_Avail.inc';
$if not EXIST '../data/EV_PHEV_Avail.inc' $INCLUDE '../../base/data/EV_PHEV_Avail.inc';

$if     EXIST '../data/EV_PHEV_Max.inc' $INCLUDE         '../data/EV_PHEV_Max.inc';
$if not EXIST '../data/EV_PHEV_Max.inc' $INCLUDE '../../base/data/EV_PHEV_Max.inc';

$if     EXIST '../data/EV_PHEV_Min.inc' $INCLUDE         '../data/EV_PHEV_Min.inc';
$if not EXIST '../data/EV_PHEV_Min.inc' $INCLUDE '../../base/data/EV_PHEV_Min.inc';

$if     EXIST '../data/EV_TECH_DATA.inc' $INCLUDE         '../data/EV_TECH_DATA.inc';
$if not EXIST '../data/EV_TECH_DATA.inc' $INCLUDE '../../base/data/EV_TECH_DATA.inc';

$if     EXIST '../data/EV_CHARGE_SCEN.inc' $INCLUDE         '../data/EV_CHARGE_SCEN.inc';
$if not EXIST '../data/EV_CHARGE_SCEN.inc' $INCLUDE '../../base/data/EV_CHARGE_SCEN.inc';


$ifi not %MIXEDFLEET%==yes $goto MIXEDFLEET_SET_END
$if     EXIST '../data/EV_BEV_Dumb_n.inc' $INCLUDE      '../data/EV_BEV_Dumb_n.inc';
$if not EXIST '../data/EV_BEV_Dumb_n.inc'  $INCLUDE '../../base/data/EV_BEV_Dumb_n.inc';

$if     EXIST '../data/EV_BEV_SOCDumb_n.inc' $INCLUDE      '../data/EV_BEV_SOCDumb_n.inc';
$if not EXIST '../data/EV_BEV_SOCDumb_n.inc'  $INCLUDE '../../base/data/EV_BEV_SOCDumb_n.inc';

$if     EXIST '../data/EV_BEV_Flex_n.inc' $INCLUDE      '../data/EV_BEV_Flex_n.inc';
$if not EXIST '../data/EV_BEV_Flex_n.inc' $INCLUDE '../../base/data/EV_BEV_Flex_n.inc';

$if     EXIST '../data/EV_BEV_Inflex_n.inc' $INCLUDE         '../data/EV_BEV_Inflex_n.inc';
$if not EXIST '../data/EV_BEV_Inflex_n.inc' $INCLUDE '../../base/data/EV_BEV_Inflex_n.inc';

$if     EXIST '../data/EV_BEV_SOCFlex_n.inc' $INCLUDE         '../data/EV_BEV_SOCFlex_n.inc';
$if not EXIST '../data/EV_BEV_SOCFlex_n.inc' $INCLUDE '../../base/data/EV_BEV_SOCFlex_n.inc';

$if     EXIST '../data/EV_BEV_Avail_n.inc' $INCLUDE         '../data/EV_BEV_Avail_n.inc';
$if not EXIST '../data/EV_BEV_Avail_n.inc' $INCLUDE '../../base/data/EV_BEV_Avail_n.inc';

$if     EXIST '../data/EV_BEV_Max_n.inc' $INCLUDE         '../data/EV_BEV_Max_n.inc';
$if not EXIST '../data/EV_BEV_Max_n.inc' $INCLUDE '../../base/data/EV_BEV_Max_n.inc';

$if     EXIST '../data/EV_BEV_Min_n.inc' $INCLUDE         '../data/EV_BEV_Min_n.inc';
$if not EXIST '../data/EV_BEV_Min_n.inc' $INCLUDE '../../base/data/EV_BEV_Min_n.inc';


$if     EXIST '../data/EV_PHEV_Dumb_n.inc' $INCLUDE      '../data/EV_PHEV_Dumb_n.inc';
$if not EXIST '../data/EV_PHEV_Dumb_n.inc'  $INCLUDE '../../base/data/EV_PHEV_Dumb_n.inc';

$if     EXIST '../data/EV_PHEV_SOCDumb_n.inc' $INCLUDE      '../data/EV_PHEV_SOCDumb_n.inc';
$if not EXIST '../data/EV_PHEV_SOCDumb_n.inc'  $INCLUDE '../../base/data/EV_PHEV_SOCDumb_n.inc';

$if     EXIST '../data/EV_PHEV_Flex_n.inc' $INCLUDE      '../data/EV_PHEV_Flex_n.inc';
$if not EXIST '../data/EV_PHEV_Flex_n.inc' $INCLUDE '../../base/data/EV_PHEV_Flex_n.inc';

$if     EXIST '../data/EV_PHEV_Inflex_n.inc' $INCLUDE         '../data/EV_PHEV_Inflex_n.inc';
$if not EXIST '../data/EV_PHEV_Inflex_n.inc' $INCLUDE '../../base/data/EV_PHEV_Inflex_n.inc';

$if     EXIST '../data/EV_PHEV_SOCFlex_n.inc' $INCLUDE         '../data/EV_PHEV_SOCFlex_n.inc';
$if not EXIST '../data/EV_PHEV_SOCFlex_n.inc' $INCLUDE '../../base/data/EV_PHEV_SOCFlex_n.inc';

$if     EXIST '../data/EV_PHEV_Avail_n.inc' $INCLUDE         '../data/EV_PHEV_Avail_n.inc';
$if not EXIST '../data/EV_PHEV_Avail_n.inc' $INCLUDE '../../base/data/EV_PHEV_Avail_n.inc';

$if     EXIST '../data/EV_PHEV_Max_n.inc' $INCLUDE         '../data/EV_PHEV_Max_n.inc';
$if not EXIST '../data/EV_PHEV_Max_n.inc' $INCLUDE '../../base/data/EV_PHEV_Max_n.inc';

$if     EXIST '../data/EV_PHEV_Min_n.inc' $INCLUDE         '../data/EV_PHEV_Min_n.inc';
$if not EXIST '../data/EV_PHEV_Min_n.inc' $INCLUDE '../../base/data/EV_PHEV_Min_n.inc';

$if     EXIST '../data/EV_FLEETSIZE.inc' $INCLUDE         '../data/EV_FLEETSIZE.inc';
$if not EXIST '../data/EV_FLEETSIZE.inc' $INCLUDE '../../base/data/EV_FLEETSIZE.inc';

$label  MIXEDFLEET_SET_END






