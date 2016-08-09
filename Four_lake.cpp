#include<iostream>
using namespace std;

int main()
{
	int DT,HZ,PY,TH;//¶´Í¥ºþ¡¢ºéÔóºþ¡¢Û¶Ñôºþ¡¢Ì«ºþ
	for (DT = 1; DT <= 4; DT++)
	{
		for (HZ = 1; HZ <=4; HZ++)
		{
			for (PY = 1; PY <= 4; PY++)
			{
				for (TH = 1; TH <= 4; TH++)
				{
					
						if (
							((DT == 1) + (HZ == 4) + (PY == 3) ==1)
							&& ((HZ == 1 )+ (DT == 4) + (PY == 2) + (TH == 3) == 1)
							&& ((HZ == 4) +( DT == 3) == 1)
							&& ((PY == 1) + (TH == 4) + (HZ == 2) + (DT == 3) == 1)
							&& (DT != HZ && DT != PY && DT != TH && HZ != PY && HZ != TH&&PY != TH)
							&& (DT + HZ + TH + PY ==10)
							)
						{
							cout << PY << endl << DT << endl << TH << endl << HZ << endl;
						}
					
					
				}
			}
		}
	}

	return 0;
}