# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp IN**   | **Exp OUT**      | **Actual Out** |  
|-------------|--------------------------------------------------------------|------------  |------------------|----------------|
|  H_01       |  Area: SQUARE If any side is zero whole area will be zero.   |      0       |0 is not allowed. | 0              |
|  H_02       |  Area: RECTANGLE If any side is zero whole area will be zero.|      0       |0 is not allowed. | 0              |
|  H_03       |  Volume: All inputs should be in same direction.        |1st input in cm, 2nd input in m |ERROR|Both the input should be in cm or m|
|  H_04       |  Addion: All the numbers we add will give positive values       |      10,20   |       30         |      30        |
|  H_05       |  Substraction: All the numbers we add substract give positive values | 20,10  |     10         |      10        |
|  H_06       |  Multipliation: All the numbers we multiply will give positive values | 20,10 |     200        |     200        |
|  H_07       |  Division: All the numbers multiply divide will give positive values | 20,10 |    2         |      2         |     
|  H_08       |  Permutation: If n will be zero then result will also be zero |     n=0  |       0      |          0             |
|  H_09       |  Combination: If n will be zero then result will also be zero |     n=0  |       0      |          0             |
|  H_10       |  factorial: When we give the input it gives positive output   |     5    |      120     |         120            |


#
# Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |--------------------------------------------------------------|  ------------|-------------|----------------|Requirement based |
|  L_02       |--------------------------------------------------------------|  ------------|-------------|----------------|Scenario based    |
|  L_03       |--------------------------------------------------------------|  ------------|-------------|----------------|Boundary based    |
