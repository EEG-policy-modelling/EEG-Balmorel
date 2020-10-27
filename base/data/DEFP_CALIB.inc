/;                                                                                                                                            
                                                                                                                                              
PARAMETER ANNUITYCG(CCC,GGG) 'Transforms investment to annual payment (fraction)'                                                             
;                                                                                                                                             
                                                                                                                                              
* Interest rate assumption: 5% (WACC )                                                                                                        
* Loan repayment assumption: lifetime of the technology if lifetime is higher than 20 years, else 20 years                                    
ANNUITYCG(C,G)$(GDATA(G,'GDKVARIABL')=1)=1/((1-(1+0.05)**(MAX(-GDATA(G,'GDLIFETIME'),-20)))/0.05);                                            
                                                                                                                                              
                                                                                                                                              
                                                                                                                                              
                                                                                                                                              
                                                                                                                                              
                                                                                                                                              
                                                                                                                                              
                                                                                                                                              
                                                                                                                                              
PARAMETER ANNUITYCX(CCC) 'Transforms investment to annual payment (fraction)'                                                                 
;                                                                                                                                             
* Interest rate assumption: Socio-economic discount rate                                                                                      
* Loan repayment  assumption for all the lines: 40 YEARS                                                                                      
                                                                                                                                              
ANNUITYCX(CCC)=1/((1-(1+DISCOUNTRATE)**(-40))/DISCOUNTRATE);                                                                                  
                                                                                                                                              
                                                                                                                                              
                                                                                                                                              
                                                                                                                                              
                                                                                                                                              
SCALAR PENALTYQ  'Penalty on violation of equation'                                                                                           
/                                                                                                                                             
1.00E+09                                                                                                                                      
/;                                                                                                                                            
                                                                                                                                              
SCALAR OCASEID   "BASE" /0/;                                                                                                                  
                                                                                                                                              
* Exchange rate (suggest to give all units in Euro 2012) --> MUSTEC: we give all in EUR2016                                                   
SCALAR OMONEY "EUR16" / 1 /;                                                                                                                  
*SCALAR OMONEY "EUR16" / 1.022 /;                                                                                                             
* SCALAR OMONEY "EUR07" / 1.389 /;                                                                                                            
                                                                                                                                              
TABLE DHFP_CALIB(AAA,SSS,TTT)   'Calibrate the price side of heat demand (EUR90/MWh)'                                                         
* PARAMETER DHFP_CALIB is used to calibrate the price side of the demand function in order to get demand consistent for a base year.          
                                                                                                                                              
DK1_Large.S01                                                                                                                                 
;                                                                                                                                             
* Default data: all identical                                                                                                                 
DHFP_CALIB(AAA,S,T)=DHFP_CALIB('DK1_Large','S01','T001')  ;                                                                                   
                                                                                                                                              
TABLE DEFP_CALIB(RRR,SSS,TTT)  'Calibrate the price side of electricity demand (EUR90/MWh) in order to get demand consistent for a base year.'
                                                                                                                                              
DK1                                                                                                                                           
DK2                                                                                                                                           
FIN                                                                                                                                           
DE4-E                                                                                                                                         
DE4-N                                                                                                                                         
DE4-S                                                                                                                                         
DE4-W                                                                                                                                         
NL                                                                                                                                            
NO1                                                                                                                                           
NO2                                                                                                                                           
NO3                                                                                                                                           
NO4                                                                                                                                           
NO5                                                                                                                                           
SE1                                                                                                                                           
SE2                                                                                                                                           
SE3                                                                                                                                           
SE4                                                                                                                                           
UK                                                                                                                                            
EE                                                                                                                                            
LV                                                                                                                                            
LT                                                                                                                                            
PL                                                                                                                                            
AT                                                                                                                                            
CZ                                                                                                                                            
CH                                                                                                                                            
HU                                                                                                                                            
IT                                                                                                                                            
SI                                                                                                                                            
SK                                                                                                                                            
DE                                                                                                                                            
FR                                                                                                                                            
;                                                                                                                                             
                                                                                                                                              
                                                                                                                                              
                                                                                                                                              
                                                                                                                                              
                                                                                                                                              
