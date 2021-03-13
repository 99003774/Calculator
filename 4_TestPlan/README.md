# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp IN**   | **Exp OUT**      | **Actual Out** |  
|-------------|--------------------------------------------------------------|------------  |------------------|----------------|
|  H_01       |  Area: SQUARE If any side is zero whole area will be zero.   |      0       |0 is not allowed. | 0              |
|  H_02       |  Area: RECTANGLE If any side is zero whole area will be zero.|      0       |0 is not allowed. | 0              |
|  H_03       |  Volume: All inputs should be in same direction.        |1st input in cm, 2nd input in m |ERROR|Both the input should be in cm or m|
|  H_04       | for arithmetic operations the numbers taken will give positive result|   positive      |       positive         |      positive    |
|  H_05       |  for permutation and combination the values taken will result in zero | n to be 0  |     0         |      0        |
|  H_06       |  for factorial the numbers taken will give positive output | 20,10 |     200        |     200        |


# Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |Addion: All the numbers we add will give positive values      |  10,20     |     30      |       30       |Requirement based |
|  L_02       |Substraction: All the numbers we add substract give positive values|  20,10   |    10    |       10       |Requirement based |
|  L_03       |Multipliation: All the numbers we multiply will give positive values|  20,10  |    200   |     200        |Requirement based |
|  L_04       |Division: All the numbers multiply divide will give positive values |  20,10  |    2     |      2         |Requirement based |
|  L_08       |  Permutation: If n will be zero then result will also be zero |     n=0  |       0      |          0     |Requirement based |
|  L_09       |  Combination: If n will be zero then result will also be zero |     n=0  |       0      |          0     |Requirement based |
|  L_10       |  factorial: When we give the input it gives positive output   |     5    |      120     |         120    |Requirement based |
