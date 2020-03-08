/*
 * Ever played those strategy games where soldiers can be put to different
 * fighting modes (aggressive, defensive...) ? You can implement something
 * like that using the strategy pattern.
 */

interface IFightMode {
	void fight();
}

class FightAggressive implements IFightMode{
	public void fight() {
		// code to fight aggressively
		System.out.println("Fighting in aggresive mode");		
	}
}

class FightDefensive implements IFightMode{
	public void fight() {
		// code to fight defensively
		System.out.println("Fighting in defensive mode");
	}
}

class FightNot implements IFightMode{
	public void fight() {
		// code to not fight at all
		System.out.println("Will not fight!");
	}
}

class Soldier {
	private IFightMode mode;
	
	public Soldier(IFightMode mode){
		this.mode = mode;
	}
	
	public void fight(){
		mode.fight();
	}
}

public class Strategy {
	public static void main(String[] args) {
		Soldier soldier1 = new Soldier(new FightAggressive());
		Soldier soldier2 = new Soldier(new FightDefensive());
		Soldier soldier3 = new Soldier(new FightNot());
		
		soldier1.fight();
		soldier2.fight();
		soldier3.fight();
	}
}
