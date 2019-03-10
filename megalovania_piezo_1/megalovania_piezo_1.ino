// Based on score by https://musescore.com/jestermusician/undertale_megalovania
// Program written by Peter Schaedler, 2016

#define buzz 9
#define led 13
#define beat 500 // = 60 s / 120 bpm * 1000 ms

#define cnat 16.35
#define csharp 17.32
#define dnat 18.35
#define eb 19.45
#define enat 20.60
#define fnat 21.83
#define fsharp 23.12
#define gnat 24.50
#define gsharp 25.96
#define anat 27.50
#define bb 29.14
#define bnat 30.87

#define oct(note, octave) note * pow(2, octave)

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  // Measure 1
  play(dnat, 4, .25);
  play(dnat, 4, .25);
  play(dnat, 5, .25);
  rest(.25);
  play(anat, 4, .25);
  rest(.5);
  play(gsharp, 4, .25);
  rest(.25);
  play(gnat, 4, .25);
  rest(.25);
  play(fnat, 4, .5);
  play(dnat, 4, .25);
  play(fnat, 4, .25);
  play(gnat, 4, .25);

  play(cnat, 4, .25);
  play(cnat, 4, .25);
  play(dnat, 5, .25);
  rest(.25);
  play(anat, 4, .25);
  rest(.5);
  play(gsharp, 4, .25);
  rest(.25);
  play(gnat, 4, .25);
  rest(.25);
  play(fnat, 4, .5);
  play(dnat, 4, .25);
  play(fnat, 4, .25);
  play(gnat, 4, .25);

  play(bnat, 3, .25);
  play(bnat, 3, .25);
  play(dnat, 5, .25);
  rest(.25);
  play(anat, 4, .25);
  rest(.5);
  play(gsharp, 4, .25);
  rest(.25);
  play(gnat, 4, .25);
  rest(.25);
  play(fnat, 4, .5);
  play(dnat, 4, .25);
  play(fnat, 4, .25);
  play(gnat, 4, .25);

  play(bb, 3, .25);
  play(bb, 3, .25);
  play(dnat, 5, .25);
  rest(.25);
  play(anat, 4, .25);
  rest(.5);
  play(gsharp, 4, .25);
  rest(.25);
  play(gnat, 4, .25);
  rest(.25);
  play(fnat, 4, .5);
  play(dnat, 4, .25);
  play(fnat, 4, .25);
  play(gnat, 4, .25);

  // 5
  play(dnat, 4, .25);
  play(dnat, 4, .25);
  play(dnat, 5, .25);
  rest(.25);
  play(anat, 4, .25);
  rest(.5);
  play(gsharp, 4, .25);
  rest(.25);
  play(gnat, 4, .25);
  rest(.25);
  play(fnat, 4, .5);
  play(dnat, 4, .25);
  play(fnat, 4, .25);
  play(gnat, 4, .25);

  play(cnat, 4, .25);
  play(cnat, 4, .25);
  play(dnat, 5, .25);
  rest(.25);
  play(anat, 4, .25);
  rest(.5);
  play(gsharp, 4, .25);
  rest(.25);
  play(gnat, 4, .25);
  rest(.25);
  play(fnat, 4, .5);
  play(dnat, 4, .25);
  play(fnat, 4, .25);
  play(gnat, 4, .25);

  play(bnat, 3, .25);
  play(bnat, 3, .25);
  play(dnat, 5, .25);
  rest(.25);
  play(anat, 4, .25);
  rest(.5);
  play(gsharp, 4, .25);
  rest(.25);
  play(gnat, 4, .25);
  rest(.25);
  play(fnat, 4, .5);
  play(dnat, 4, .25);
  play(fnat, 4, .25);
  play(gnat, 4, .25);

  play(bb, 3, .25);
  play(bb, 3, .25);
  play(dnat, 5, .25);
  rest(.25);
  play(anat, 4, .25);
  rest(.5);
  play(gsharp, 4, .25);
  rest(.25);
  play(gnat, 4, .25);
  rest(.25);
  play(fnat, 4, .5);
  play(dnat, 4, .25);
  play(fnat, 4, .25);
  play(gnat, 4, .25);

  // 9
  play(dnat, 5, .25);
  play(dnat, 5, .25);
  play(dnat, 6, .25);
  rest(.25);
  play(anat, 5, .25);
  rest(.5);
  play(gsharp, 5, .25);
  rest(.25);
  play(gnat, 5, .25);
  rest(.25);
  play(fnat, 5, .5);
  play(dnat, 5, .25);
  play(fnat, 5, .25);
  play(gnat, 5, .25);

  play(cnat, 5, .25);
  play(cnat, 5, .25);
  play(dnat, 6, .25);
  rest(.25);
  play(anat, 5, .25);
  rest(.5);
  play(gsharp, 5, .25);
  rest(.25);
  play(gnat, 5, .25);
  rest(.25);
  play(fnat, 5, .5);
  play(dnat, 5, .25);
  play(fnat, 5, .25);
  play(gnat, 5, .25);

  play(bnat, 4, .25);
  play(bnat, 4, .25);
  play(dnat, 6, .25);
  rest(.25);
  play(anat, 5, .25);
  rest(.5);
  play(gsharp, 5, .25);
  rest(.25);
  play(gnat, 5, .25);
  rest(.25);
  play(fnat, 5, .5);
  play(dnat, 5, .25);
  play(fnat, 5, .25);
  play(gnat, 5, .25);

  play(bb, 4, .25);
  play(bb, 4, .25);
  play(dnat, 6, .25);
  rest(.25);
  play(anat, 5, .25);
  rest(.5);
  play(gsharp, 5, .25);
  rest(.25);
  play(gnat, 5, .25);
  rest(.25);
  play(fnat, 5, .5);
  play(dnat, 5, .25);
  play(fnat, 5, .25);
  play(gnat, 5, .25);

  // Repeat 9
  play(dnat, 5, .25);
  play(dnat, 5, .25);
  play(dnat, 6, .25);
  rest(.25);
  play(anat, 5, .25);
  rest(.5);
  play(gsharp, 5, .25);
  rest(.25);
  play(gnat, 5, .25);
  rest(.25);
  play(fnat, 5, .5);
  play(dnat, 5, .25);
  play(fnat, 5, .25);
  play(gnat, 5, .25);

  play(cnat, 5, .25);
  play(cnat, 5, .25);
  play(dnat, 6, .25);
  rest(.25);
  play(anat, 5, .25);
  rest(.5);
  play(gsharp, 5, .25);
  rest(.25);
  play(gnat, 5, .25);
  rest(.25);
  play(fnat, 5, .5);
  play(dnat, 5, .25);
  play(fnat, 5, .25);
  play(gnat, 5, .25);

  play(bnat, 4, .25);
  play(bnat, 4, .25);
  play(dnat, 6, .25);
  rest(.25);
  play(anat, 5, .25);
  rest(.5);
  play(gsharp, 5, .25);
  rest(.25);
  play(gnat, 5, .25);
  rest(.25);
  play(fnat, 5, .5);
  play(dnat, 5, .25);
  play(fnat, 5, .25);
  play(gnat, 5, .25);

  play(bb, 4, .25);
  play(bb, 4, .25);
  play(dnat, 6, .25);
  rest(.25);
  play(anat, 5, .25);
  rest(.5);
  play(gsharp, 5, .25);
  rest(.25);
  play(gnat, 5, .25);
  rest(.25);
  play(fnat, 5, .5);
  play(dnat, 5, .25);
  play(fnat, 5, .25);
  play(gnat, 5, .25);

  // 13
  play(fnat, 5, .5);
  play(fnat, 5, .25);
  play(fnat, 5, .25);
  rest(.25);
  play(fnat, 5, .25);
  rest(.15);
  play(enat, 5, .10);
  play(fnat, 5, .5);
  play(dnat, 5, .5);
  play(dnat, 5, 1.25);

  play(fnat, 5, .5);
  play(fnat, 5, .25);
  play(fnat, 5, .25);
  rest(.25);
  play(gnat, 5, .25);
  rest(.25);
  play(gsharp, 5, .5);
  play(gnat, 5, .083);
  play(gsharp, 5, .083);
  play(gnat, 5, .084);
  play(fnat, 5, .25);
  play(dnat, 5, .25);
  play(fnat, 5, .25);
  play(gnat, 5, .25);
  rest(.5);

  play(fnat, 5, .5);
  play(fnat, 5, .25);
  play(fnat, 5, .25);
  rest(.25);
  play(gnat, 5, .25);
  rest(.25);
  play(gsharp, 5, .25);
  rest(.25);
  play(anat, 5, .25);
  rest(.25);
  play(cnat, 6, .25);
  rest(.25);
  play(anat, 5, .75);

  play(dnat, 6, .25);
  rest(.25);
  play(dnat, 6, .25);
  rest(.25);
  play(dnat, 6, .25);
  play(anat, 5, .25);
  play(dnat, 6, .25);
  play(cnat, 6, 1);
  for (double i = cnat; i < gnat; i += .509375) {
    tone(buzz, oct(i, 6));
    rest(.015625);
  }
  vibrato(gnat, 6, 1);

  // 17
  play(anat, 5, .5);
  play(anat, 5, .25);
  play(anat, 5, .25);
  rest(.25);
  play(anat, 5, .25);
  rest(.15);
  play(gnat, 5, .10);
  play(anat, 5, .5);
  play(gnat, 5, .5);
  play(gnat, 5, 1.25);

  play(anat, 5, .5);
  play(anat, 5, .25);
  play(anat, 5, .25);
  rest(.25);
  play(anat, 5, .25);
  rest(.25);
  play(gnat, 5, .25);
  rest(.25);
  play(anat, 5, .25);
  rest(.25);
  play(dnat, 6, .25);
  rest(.25);
  play(anat, 5, .25);
  play(gnat, 5, .5);

  play(dnat, 6, .5);
  play(anat, 5, .5);
  play(gnat, 5, .5);
  play(fnat, 5, .5);
  play(cnat, 6, .5);
  play(gnat, 5, .5);
  play(fnat, 5, .5);
  play(enat, 5, .5);

  play(bb, 4, .5);
  play(cnat, 5, .25);
  play(dnat, 5, .25);
  rest(.25);
  play(fnat, 5, .25);
  rest(.25);
  play(cnat, 6, 2.25);

  // 21
  rest(2);
  play(fnat, 5, .25);
  play(dnat, 5, .25);
  play(fnat, 5, .25);
  play(gnat, 5, .25);
  play(gsharp, 5, .25);
  play(gnat, 5, .25);
  play(fnat, 5, .25);
  play(dnat, 5, .25);

  play(gsharp, 5, .125);
  play(gnat, 5, .125);
  play(fnat, 5, .125);
  play(dnat, 5, .125);
  play(fnat, 5, .5);
  play(gnat, 5, 2.25);
  play(gsharp, 5, .5);
  play(anat, 5, .25);

  play(cnat, 6, .5);
  play(anat, 5, .25);
  play(gsharp, 5, .25);
  play(gnat, 5, .25);
  play(fnat, 5, .25);
  play(dnat, 5, .25);
  play(enat, 5, .25);
  play(fnat, 5, .5);
  play(gnat, 5, .5);
  play(anat, 5, .5);
  play(cnat, 6, .5);

  play(csharp, 6, .5);
  play(gsharp, 5, .25);
  rest(.25);
  play(gsharp, 5, .25);
  play(gnat, 5, .25);
  play(fnat, 5, .25);
  play(gnat, 5, 2.25);

  // 25
  play(fnat, 4, .5);
  play(gnat, 4, .5);
  play(anat, 4, .5);
  play(fnat, 5, .5);
  play(enat, 5, 1);
  play(dnat, 5, 1);
  
  play(enat, 5, 1);
  play(fnat, 5, 1);
  play(gnat, 5, 1);
  play(enat, 5, 1);

  play(anat, 5, 2);
  play(anat, 5, .25);
  play(gsharp, 5, .25);
  play(gnat, 5, .25);
  play(fsharp, 5, .25);
  play(fnat, 5, .25);
  play(enat, 5, .25);
  play(eb, 5, .25);
  play(dnat, 5, .25);

  play(csharp, 5, 2);
  play(eb, 5, 2);

  // Repeat 21-28
  rest(2);
  play(fnat, 5, .25);
  play(dnat, 5, .25);
  play(fnat, 5, .25);
  play(gnat, 5, .25);
  play(gsharp, 5, .25);
  play(gnat, 5, .25);
  play(fnat, 5, .25);
  play(dnat, 5, .25);

  play(gsharp, 5, .125);
  play(gnat, 5, .125);
  play(fnat, 5, .125);
  play(dnat, 5, .125);
  play(fnat, 5, .5);
  play(gnat, 5, 2.25);
  play(gsharp, 5, .5);
  play(anat, 5, .25);

  play(cnat, 6, .5);
  play(anat, 5, .25);
  play(gsharp, 5, .25);
  play(gnat, 5, .25);
  play(fnat, 5, .25);
  play(dnat, 5, .25);
  play(enat, 5, .25);
  play(fnat, 5, .5);
  play(gnat, 5, .5);
  play(anat, 5, .5);
  play(cnat, 6, .5);

  play(csharp, 6, .5);
  play(gsharp, 5, .25);
  rest(.25);
  play(gsharp, 5, .25);
  play(gnat, 5, .25);
  play(fnat, 5, .25);
  play(gnat, 5, 2.25);

  play(fnat, 4, .5);
  play(gnat, 4, .5);
  play(anat, 4, .5);
  play(fnat, 5, .5);
  play(enat, 5, 1);
  play(dnat, 5, 1);
  
  play(enat, 5, 1);
  play(fnat, 5, 1);
  play(gnat, 5, 1);
  play(enat, 5, 1);

  play(anat, 5, 2);
  play(anat, 5, .25);
  play(gsharp, 5, .25);
  play(gnat, 5, .25);
  play(fsharp, 5, .25);
  play(fnat, 5, .25);
  play(enat, 5, .25);
  play(eb, 5, .25);
  play(dnat, 5, .25);

  play(csharp, 5, 2);
  play(eb, 5, 2);

  // 29
}

void play(double note, int octave, double note_val) {
  digitalWrite(led, HIGH);
  tone(buzz, oct(note, octave));
  delay((beat * note_val) - 20);
  noTone(buzz);
  digitalWrite(led, LOW);
  delay(20);
}

void rest(double note_val) {
  delay(beat * note_val);
}

void vibrato(double note, int octave, double note_val) {
  for (int i = 0; i < 4; i++) {
    tone(buzz, oct(note, octave));
    delay(beat * note_val / 16);
    tone(buzz, oct(note, octave) - 20);
    delay(beat * note_val / 16);
    tone(buzz, oct(note, octave));
    delay(beat * note_val / 16);
    tone(buzz, oct(note, octave) + 20);
    delay(beat * note_val / 16);
  }
}

