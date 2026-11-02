class Time {
    private int hours;
    private int minutes;
    private int seconds;

    // Constructors without modifiers
    Time(int hours) {
        this(hours, 0, 0);
    }
    Time(int hours, int minutes) {
        this(hours, minutes, 0);
    }
    Time(int hours, int minutes, int seconds) {
        this.hours = hours;
        this.minutes = minutes;
        this.seconds = seconds;
    }

    // Overflow handing (60 sec = 1 min, 60 min = 1 hour)
    public void normalise() {
        if (this.seconds >= 60) {
            this.minutes += this.seconds / 60;
            this.seconds %= 60;
        }
        if (this.minutes >= 60) {
            this.hours += this.minutes / 60;
            this.minutes %= 60;
        }
        if (this.hours >= 24) {
            this.hours %= 24;
        }
    }

    // 1 second increasing
    public Time advanceSeconds() {
        this.seconds++;
        normalise();
        return this;
    }

    // Compute absolute value between current and another times
    public String difference(Time other) {
        int thisTotalSeconds = (this.hours * 3600) + (this.minutes * 60) + this.seconds;
        int otherTotalSeconds = (other.hours * 3600) + (other.minutes * 60) + other.seconds;

        int total_difference = Math.abs(thisTotalSeconds - otherTotalSeconds);

        int hours_difference = total_difference / 3600;
        total_difference %= 3600;
        int minutes_difference = total_difference / 60;
        int second_difference = total_difference % 60;

        return String.format("%02d:%02d:%02d", hours_difference, minutes_difference, second_difference);
    }
    @Override
    public String toString() {
        return String.format("%02d:%02d:%02d", hours, minutes, seconds);
    }
}

public class TimeCreator {
    // Methods for creating time examples
    public static Time create(int hours) {
        return new Time(hours);
    }
    public static Time create(int hours, int minutes) {
        return new Time(hours, minutes);
    }
    public static Time create(int hours, int minutes, int seconds) {
        return new Time(hours, minutes, seconds);
    }

    public static void main(String[] args) {
        // Creating 2 time examples
        Time time1 = TimeCreator.create(14);
        Time time2 = TimeCreator.create(12, 32, 48);

        System.out.println("Time 1: " + time1);
        System.out.println("Time 2: " + time2);
        // Computing the difference
        System.out.println("Difference: " + time1.difference(time2));

        // Demonstration of increasing
        System.out.println("\n Increase the time on 3 seconds...");

        // Increase
        time2.advanceSeconds().advanceSeconds().advanceSeconds();

        // Result after increasing
        System.out.println("Now time 2 is: " + time2);
    }
}