1. Pinout Connections Tables

| Arduino Nano | Desc                               | SW Name          |
|--------------|------------------------------------|------------------|
| D13          | capacitor test 1 charge pin        | Cap1chargePin    |
| D12          | PUSH button Mode                   | buttonMode       |
| D11          | Push button TEST                   | buttonTest       |
| D10          | resistor apply Vin                 | ApplyResVoltage  |
| D9           | resistor range  Upper              | Res1M            |
| D8           | resistor range  Upper MID          | Res200K          |
| D7           | Cap test 3 volt ref                | AIN1         |
| D6           | Cap test 3 connector               | AIN0         |
| D5           | Inductor out                       | OutLtestPin      |
| D4           | inductor in                        | PulseInPinLtest  |
| D3           | resistor range   lower MID         | Res20K           |
| D2           | resistor range   Lower             | Res2K            |
| A0           | capacitor test 1 discharge pin     | Cap1dischargePin |
| A1           | Cap test 3  pulse pin              | Cap3pulsePin     |
| A2           | capacitor test 2 negative  ADC     | Cap2InPin        |
| A3           | capacitor test 2 positive  ADC     | Cap2OutPin       |
| A4           | LCD SDA I2C                        | DATA SDA     |
| A5           | LCD CLK I2C                        | CLK  SCLK    |
| A6           | capacitor test 1 ADC               | Cap1analogPin    |
| A7           | Resistor Test  ADC                 | analogResPin     |


2. Tesk Socket layout 

| Test Socket PCB pin | Name                        | NANO Pin |
|---------------------|-----------------------------|----------|
| 1                   | resistor test Voltage apply | D10      |
| 2                   | n/a                         | n/a      |
| 3                   | ground                      | ground   |
| 4                   | ground                      | ground   |
| 5                   | n/a                         | n/a      |
| 6                   | n/a                         | n/a      |
| 7                   | resistor test Analog in     | A7       |
| 8                   | """                         | """      |
| 9                   | Inductor Circuit            | n/a      |
| 10                  | C2 test Postive             | A3       |
| 11                  | n/a                         | n/a      |
| 12                  | C2 test negative            | A2       |
| 13                  | ground                      | ground   |
| 14                  | ground                      | ground   |
| 15                  | C3 test                     | D6       |
| 16                  | C1 test                     | A6       |

