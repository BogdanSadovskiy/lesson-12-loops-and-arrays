using namespace std;

#include <iostream>

int main()
{

	const int n = 8;
	int arr[n];
	int k = 0;
	int k1 = 1;
	int start;
	for (int i = 0; i < n; i++) {
		arr[i] = 0;
	}
	

	while (true) {
		int q = 0;
		cout << "1 - play; 2 - exit\n"; cin >> start;
		if (start == 2) {
			cout << "BYE\n";
			break;
		}
		if (k == 0) {
			cout << "To start the carrousel input the new element\n";
			cin >> arr[k];
	
		}
		k = 0;
		for (int i = 0; i < 8; i++) {
			if (arr[i] > 0) {
				k++;
			}
			
		}
		
		for (int q = 0, i = 0; k < 8;) {
			
			if (q < 2) {
				cout << "Want to add one more element? (1- yes; 2 - no)\n";
				cin >> q;
			}
			
			if (q == 1) {
				cout << "Input " << k + 1 << " element\n";
				cin >> arr[k];
				
			}
			if (k==7) {
				cout << "Great\n";
				
			}
			k++;
		}
		cout << "________________________\n";
		for (int i = 0; i < n; i++) {
			if (arr[i] > 0) {
				cout << arr[i] << " ";
			}
			if (i == 7) { cout << endl; }
		}
		cout << "------------------------\n";

		for (int i = k; i >= 0;) {
			int q;
			if (arr[k - 1] == 0) {
				k--;
				continue;
			}
			cout << "Want to delete " << k << " element (1 - yes; 2 - no)\n";
			cin >> q;
			if (q == 1) {
				cout << "Deleted " << k << " element (" << arr[k - 1] << ")\n";
				arr[k - 1] = 0;
				k--;
			}
			if (k < 1) {
				break;
			}
			if (q > 1) {
				break;
			}
		}

		cout << "________________________\n";
		for (int i = 0; i < n; i++) {
			if (arr[i] > 0) {
				cout << arr[i] << " ";
			}
			if (i == 7) { cout << endl; }
		}
		cout << "------------------------\n";

		if (k == 0) {
			k = 0;
			cout << "You have not any element\n\n";
			continue;
		}
		int q1;
		do {
			
			cout << endl << "Roll carrousel? (1 - yes; 2 - no)\n";
			cin >> q1;
			if (q1 > 1) {
				cout << endl;
				continue;
			}
			else if (q1 == 1) {
				int r = 0;
				for (int a = 0; a < n; a++) {
					if ((arr[a] - 1) > 0) {
						r++;
					}
				}

				for (int i = 0; i < n; i++) {


					while (i != 0 && q != 2 && r != 0) {
						if (q < 2) {
							cout << "Next ? (1 - yes; 2 - go the the end of rolling)\n"; cin >> q;
							r--;
						}
						if (q == 1) {
							break;
						}
					}

					if (arr[i] != 0) {
						arr[i]--;
					}
					if (arr[i] == 0) {

						arr[i] = arr[i + 1];
						arr[i + 1] = 0;
						if (arr[i] != 0) {
							arr[i]--;
						}
					}
					if (arr[i] < 0) { arr[i] = 0; }
					if (arr[i] > 0) {
						cout << "element " << k1 << " now is " << arr[i] << endl;
					}
					k1++;

					if (i == 7) { k1 = 1; }

				}

			}
			cout << "________________________\n";
			for (int i = 0; i < n; i++) {
				if (arr[i] > 0) {
					cout << arr[i] << " ";
				}
				if (i == 7) { cout << endl; }
			}
			cout << "------------------------\n";
		} while (q1 != 2);
		

	}

}
