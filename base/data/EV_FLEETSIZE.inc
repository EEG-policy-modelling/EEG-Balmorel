SET                                                                                         EVTYPE      Fleetsize of two fleets of EV'            
/                                                                                                                                                 
BEV_Fleet1                                                                                                                                        
PHEV_Fleet1                                                                                                                                       
BEV_Fleet2                                                                                                                                        
PHEV_Fleet2                                                                                                                                       
/;                                                                                                                                                
                                                                                                                                                  
                                                        Parameter                                                                                 
                                                        EV_FLEETSIZE(YYY,EVTYPE);                                                                 
                                                        TABLE EV_FLEETSIZE_DATA(YYY,EVTYPE)                                                       
                                                        BEV_Fleet1                          PHEV_Fleet1 BEV_Fleet2                     PHEV_Fleet2
2020                                                    30000                               50000       0                              0          
2030                                                    750000                              100000      750000                         100000     
2040                                                    1500000                             50000       2000000                        50000      
2050                                                    2500000                             0           2500000                        0          
;                                                                                                                                                 
EV_FLEETSIZE(YYY,EVTYPE)=EV_FLEETSIZE_DATA(YYY,EVTYPE);                                                                                           
EV_FLEETSIZE_DATA(YYY,EVTYPE) = 0;                                                                                                                
                                                                                                                                                  
                                                                                                                                                  
                                                                                                                                                  
                                                                                                                                                  
                                                                                                                                                  
                                                                                                                                                  
