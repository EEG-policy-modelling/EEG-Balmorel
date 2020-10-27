PARAMETER XMAXINV(IRRRE,IRRRI)   'Max investment in transmission capacity between two regions for each simulated year(each 5th year)'                                                   
*for At model max cap. Is  Entsoe 2040 scenario (DG scenario)                                                                                                                           
/                                                                                                                                                                                       
$ontext                                                                                                                                                                                 
DK_E                                                                                                                                  .    DK_W   1000                                  
DK_E                                                                                                                                  .    DE_NE  1000                                  
DK_E                                                                                                                                  .    NO_O   3000                                  
DK_E                                                                                                                                  .    SE_S   1000                                  
DK_W                                                                                                                                  .    DK_E   1000                                  
DK_W                                                                                                                                  .    DE_NW  2000                                  
DK_W                                                                                                                                  .    NO_S   1000                                  
DK_W                                                                                                                                  .    SE_M   1000                                  
DE_CS                                                                                                                                 .    DE_NE  12000                                 
DE_CS                                                                                                                                 .    DE_NW  12000                                 
DE_NE                                                                                                                                 .    DE_CS  12000                                 
DE_NE                                                                                                                                 .    DE_NW  12000                                 
DE_NE                                                                                                                                 .    DK_E   1000                                  
DE_NE                                                                                                                                 .    SE_S   1000                                  
DE_NW                                                                                                                                 .    DE_CS  12000                                 
DE_NW                                                                                                                                 .    DE_NE  12000                                 
DE_NW                                                                                                                                 .    DK_W   2000                                  
DE_NW                                                                                                                                 .    NO_S   2000                                  
DE_NW                                                                                                                                 .    SE_S   1000                                  
FI_R                                                                                                                                  .    NO_N   1000                                  
FI_R                                                                                                                                  .    SE_M   2000                                  
FI_R                                                                                                                                  .    SE_N   2000                                  
NO_M                                                                                                                                  .    NO_S   2000                                  
NO_M                                                                                                                                  .    NO_N   2000                                  
NO_M                                                                                                                                  .    SE_N   2000                                  
NO_N                                                                                                                                  .    FI_R   1000                                  
NO_N                                                                                                                                  .    NO_M   2000                                  
NO_N                                                                                                                                  .    SE_N   2000                                  
NO_O                                                                                                                                  .    DK_E   3000                                  
NO_O                                                                                                                                  .    SE_M   2000                                  
NO_O                                                                                                                                  .    NO_S   9000                                  
NO_S                                                                                                                                  .    DE_NW  2000                                  
NO_S                                                                                                                                  .    DK_W   1000                                  
NO_S                                                                                                                                  .    NO_M   2000                                  
NO_S                                                                                                                                  .    NO_O   9000                                  
SE_M                                                                                                                                  .    DK_W   1000                                  
SE_M                                                                                                                                  .    FI_R   2000                                  
SE_M                                                                                                                                  .    SE_N   2000                                  
SE_M                                                                                                                                  .    SE_S   2000                                  
SE_M                                                                                                                                  .    NO_O   2000                                  
SE_N                                                                                                                                  .    FI_R   2000                                  
SE_N                                                                                                                                  .    NO_M   2000                                  
SE_N                                                                                                                                  .    NO_N   2000                                  
SE_N                                                                                                                                  .    SE_M   2000                                  
SE_S                                                                                                                                  .    DE_NE  1000                                  
SE_S                                                                                                                                  .    DE_NW  1000                                  
SE_S                                                                                                                                  .    DK_E   1000                                  
SE_S                                                                                                                                  .    SE_M   1000   /*   ST2040 DG2040 GDA2040     
AT                                                                                                                                    .    CZ     1000   /*          1000               
AT                                                                                                                                    .    CH     1700   /*          1700               
AT                                                                                                                                    .    HU     1200   /*          1200               
AT                                                                                                                                    .    IT     1605   /*          1605               
AT                                                                                                                                    .    SI     2200   /*          2200               
AT                                                                                                                                    .    DE     7500   /*          7500               
CZ                                                                                                                                    .    AT     1200   /*          1200               
CH                                                                                                                                    .    AT     1700   /*          1700               
HU                                                                                                                                    .    AT     800    /*          800                
IT                                                                                                                                    .    AT     1335   /*          1335               
SI                                                                                                                                    .    AT     2200   /*          2200               
DE                                                                                                                                    .    AT     7500   /*          7500               
CH                                                                                                                                    .    DE     4100   /*          4100               
DE                                                                                                                                    .    CH     6500   /*          6500               
CH                                                                                                                                    .    FR     5200   /*          5200               
FR                                                                                                                                    .    CH     3800   /*          3800               
CH                                                                                                                                    .    IT     3700   /*          3700               
IT                                                                                                                                    .    CH     6000   /*          6000               
CZ                                                                                                                                    .    DE     2000   /*          2000               
DE                                                                                                                                    .    CZ     2600   /*          2600               
CZ                                                                                                                                    .    PL     800    /*          800                
PL                                                                                                                                    .    CZ     600    /*          600                
CZ                                                                                                                                    .    SK     1100   /*          1100               
SK                                                                                                                                    .    CZ     2100   /*          2100               
DE                                                                                                                                    .    FR     5800   /*   4800   5800   4800        
FR                                                                                                                                    .    DE     5800   /*   4800   5800   4800        
DE                                                                                                                                    .    PL     3500   /*   4500   3500   4500        
PL                                                                                                                                    .    DE     3000   /*   3000   3000   3000        
FR                                                                                                                                    .    IT     4350   /*          4350               
IT                                                                                                                                    .    FR     2160   /*          2160               
HU                                                                                                                                    .    SI     1200   /*          1200               
SI                                                                                                                                    .    HU     1200   /*          1200               
HU                                                                                                                                    .    SK     2000   /*          2000               
SK                                                                                                                                    .    HU     2000   /*          2000               
PL                                                                                                                                    .    SK     990    /*          990                
SK                                                                                                                                    .    PL     990    /*          990                
ES                                                                                                                                    .    PT     1000                                  
PT                                                                                                                                    .    ES     1000                                  
ES                                                                                                                                    .    FR     1000                                  
FR                                                                                                                                    .    ES     1000                                  
ES-CSP                                                                                                                                .    ES     1000                                  
ES                                                                                                                                    .    ES-CSP 1000                                  
                                                                                                                                                                                        
$offtext                                                                                                                                                                                
/;                                                                                                                                                                                      
                                                                                                                                                                                        
