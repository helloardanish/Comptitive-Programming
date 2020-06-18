#include <iostream> 
#include <string>
#include <algorithm>

int main() {
	using namespace std;
	
	string lines[] = {
		"AFAIK: As Far As I Know",
		"AFK: Away From Keyword",
		"ASL: Age/Sex/Location",
		"ATM: At The Moment",
		"b/c: Because",
		"b/w: between",
		"b4: Before",
		"BBIAB: Be Back In A Bit",
		"BBL: Be Back Later",
		"BFF: Best Friends Forever",
		"BRB: Be Right Back",
		"BTW: By The Way",
		"CTN: Can't Talk Now",
		"CYE: Check Your E-mail",
		"dl: Download",
		"ETA: Estimated Time Arrival",
		"FWIW: For What's It's Worth",
		"FYI: For Your Information",
		"GG: Good Game",
		"GJ: Good Job",
		"GL: Good Luck",
		"gr8: Great",
		"GTG: Go To Go",
		"GMV: Got My Vote",
		"HTH: Hope This Helps",
		"hw: Homework",
		"IAC: In Any Case",
		"IC: I See",
		"IDK: I don't know'",
		"IIRC: If I Remember Correctly",
		"IKR: I Know, Right?"
		"IKR: I know Re",
		"IM: Instant Message",
		"IMO: In My Opinion",
		"IMHO: In My Humble Opinion",
		"IRL: In Real Life",
		"J/K: Just Kidding",
		"K: OK",
		"l8: Late",
		"l8r: Later",
		"LMK: Let Me Know",
		"LOL: Laughing Out Loud",
		"LOL: Lots Of Love",
		"MMB: Message Me Back",
		"msg: Message",
		"MYOB: Mind Your Own Business",
		"N/A: Not Available",
		"NC: No Comment",
		"ne1: Anyone",
		"NM: Not Much",
		"Noob: Newbie",
		"NP: No Problem",
		"NTN: No Thanks Needed",
		"OMG: Oh My Gosh",
		"OMG: Oh My God",
		"OMW: On My Way",
		"OT: Off Topic",
		"PC: Personal Computer",
		"pls: Please",
		"POS: Parent Over Shoulder",
		"ppl: People",
		"qt: Cutie",
		"re: Regarding",
		"SMH: Shaking My Head",
		"sry: Sorry",
		"TBA: To Be Announced",
		"TBC: To Be Continued",
		"TC: Take Care",
		"thx: Thanks",
		"TIA: Thanks In Advance",
		"TMI: Too Much Information",
		"TTFN: Ta-ta For Now",
		"TTYL: Talk To You Later",
		"txt: Text",
		"TY: Thank You",
		"w/e: Whatever",
		"w/o: Without",
		"w8: Wait",
		"XOXO: Hugs And Kisses",
		"Y: Why",
		"YNt: Why Not?",
		"YOLO: You Only Live Once",
		"YW: You're Welcome",
		"ZZZ: Sleeping",
		"AMA: Ask Me Anything",
		"ICYMI: In Case You Missed It",
		"HMU: Hit Me Up",
		"TTYS: Talk To You Soon",
		"IDC: I don't Care'",
		"HBD: Happy Birthday",
		"NVM: Never Mind",
		"ILY: I Love You",
		"TGIF: Thanks God It's Friday",
		"TMI: Too Much Information",
		"FOMO: Fear Of Missing Out",
		"TTYN: Talk To You Never"
	};
	
	
	int n = sizeof(lines) / sizeof(lines[0]);
	
	sort(lines, lines + n);
	
	for (int i=0; i < n; i++){
		cout << i << ". " << lines[i] << ",\n";
	}
	
	cout << endl;
	
	return 0;
}

