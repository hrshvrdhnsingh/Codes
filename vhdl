library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Output is
   Port(A : in STD_LOGIC;
        B : in STD_LOGIC;
        C : in STD+LOGIC;
        F : out STD_LOGIC);
end Output;

architecture Behavioural of Output is
begin
   F <= (A AND B AND C) OR (A AND B) OR C;
end behavioural;
