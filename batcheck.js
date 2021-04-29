function x306() {
	let c0 = battery.level;
	let e0 = battery.charging;
	sessionStorage.setItem("batLvl",c0);
		if (battery.charging == true){
			sessionStorage.setItem("batChg","true");
		} else {sessionStorage.setItem("batChg","false");}
}

setInterval(x306,500);
