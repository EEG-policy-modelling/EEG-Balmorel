SET  Y(YYY) "Years in the simulation"
/                                    
$ifi %BB4%==yes 2030                 
*, 2020,2030,2040,2050               
$ifi not %BB4%==yes 2020,2030        
/;                        


        'Grafenrheinfeld': 2015,
        'Philippsburg': 2019,
        'Brokdorf': 2021,
        'Grohnde': 2021,
        'Gundremmingen': 2021,
        'Emsland': 2022,
        'Isar': 2022,
        'Neckarwestheim': 2022,
        'Unterweser': 2011,
        'Brunsbuettel': 2011,
        'Biblis': 2011,
        'Kruemmel': 2011,


PPM_data = pm.heuristics.set_known_retire_years(PPM_data)		
