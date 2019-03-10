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
  rest(16.125); // extra .125 for latency

  // 5
  play(dnat, 3, .5);
  play(dnat, 3, .5);
  play(dnat, 3, .25);
  play(dnat, 3, .25);
  rest(.25);
  play(dnat, 3, .5);
  play(dnat, 3, .5);
  play(dnat, 3, .25);
  play(dnat, 3, .25);
  play(dnat, 3, .25);
  play(dnat, 3, .5);

  play(cnat, 3, .5);
  play(cnat, 3, .5);
  play(cnat, 3, .25);
  play(cnat, 3, .25);
  rest(.25);
  play(cnat, 3, .5);
  play(cnat, 3, .5);
  play(cnat, 3, .25);
  play(cnat, 3, .25);
  play(cnat, 3, .25);
  play(cnat, 3, .5);

  play(bnat, 2, .5);
  play(bnat, 2, .5);
  play(bnat, 2, .25);
  play(bnat, 2, .25);
  rest(.25);
  play(bnat, 2, .5);
  play(bnat, 2, .5);
  play(bnat, 2, .25);
  play(bnat, 2, .25);
  play(bnat, 2, .25);
  play(bnat, 2, .5);

  play(bb, 2, .5);
  play(bb, 2, .5);
  play(bb, 2, .25);
  play(bb, 2, .25);
  rest(.25);
  play(cnat, 3, .5);
  play(cnat, 3, .5);
  play(cnat, 3, .25);
  play(cnat, 3, .25);
  play(cnat, 3, .25);
  play(cnat, 3, .5);

  // 9
  play(dnat, 3, .5);
  play(dnat, 3, .5);
  play(dnat, 3, .25);
  play(dnat, 3, .25);
  rest(.25);
  play(dnat, 3, .5);
  play(dnat, 3, .5);
  play(dnat, 3, .25);
  play(dnat, 3, .25);
  play(dnat, 3, .25);
  play(dnat, 3, .5);

  play(cnat, 3, .5);
  play(cnat, 3, .5);
  play(cnat, 3, .25);
  play(cnat, 3, .25);
  rest(.25);
  play(cnat, 3, .5);
  play(cnat, 3, .5);
  play(cnat, 3, .25);
  play(cnat, 3, .25);
  play(cnat, 3, .25);
  play(cnat, 3, .5);

  play(bnat, 2, .5);
  play(bnat, 2, .5);
  play(bnat, 2, .25);
  play(bnat, 2, .25);
  rest(.25);
  play(bnat, 2, .5);
  play(bnat, 2, .5);
  play(bnat, 2, .25);
  play(bnat, 2, .25);
  play(bnat, 2, .25);
  play(bnat, 2, .5);

  play(bb, 2, .5);
  play(bb, 2, .5);
  play(bb, 2, .25);
  play(bb, 2, .25);
  rest(.25);
  play(cnat, 3, .5);
  play(cnat, 3, .5);
  play(cnat, 3, .25);
  play(cnat, 3, .25);
  play(cnat, 3, .25);
  play(cnat, 3, .5);

  // Repeat 9
  play(dnat, 3, .5);
  play(dnat, 3, .5);
  play(dnat, 3, .25);
  play(dnat, 3, .25);
  rest(.25);
  play(dnat, 3, .5);
  play(dnat, 3, .5);
  play(dnat, 3, .25);
  play(dnat, 3, .25);
  play(dnat, 3, .25);
  play(dnat, 3, .5);

  play(cnat, 3, .5);
  play(cnat, 3, .5);
  play(cnat, 3, .25);
  play(cnat, 3, .25);
  rest(.25);
  play(cnat, 3, .5);
  play(cnat, 3, .5);
  play(cnat, 3, .25);
  play(cnat, 3, .25);
  play(cnat, 3, .25);
  play(cnat, 3, .5);

  play(bnat, 2, .5);
  play(bnat, 2, .5);
  play(bnat, 2, .25);
  play(bnat, 2, .25);
  rest(.25);
  play(bnat, 2, .5);
  play(bnat, 2, .5);
  play(bnat, 2, .25);
  play(bnat, 2, .25);
  play(bnat, 2, .25);
  play(bnat, 2, .5);

  play(bb, 2, .5);
  play(bb, 2, .5);
  play(bb, 2, .25);
  play(bb, 2, .25);
  rest(.25);
  play(cnat, 3, .5);
  play(cnat, 3, .5);
  play(cnat, 3, .25);
  play(cnat, 3, .25);
  play(cnat, 3, .25);
  play(cnat, 3, .5);

  // 13
  play(dnat, 3, .5);
  play(dnat, 3, .5);
  play(dnat, 3, .25);
  play(dnat, 3, .25);
  rest(.25);
  play(dnat, 3, .5);
  play(dnat, 3, .5);
  play(dnat, 3, .25);
  play(dnat, 3, .25);
  play(dnat, 3, .25);
  play(dnat, 3, .5);

  play(cnat, 3, .5);
  play(cnat, 3, .5);
  play(cnat, 3, .25);
  play(cnat, 3, .25);
  rest(.25);
  play(cnat, 3, .5);
  play(cnat, 3, .5);
  play(cnat, 3, .25);
  play(cnat, 3, .25);
  play(cnat, 3, .25);
  play(cnat, 3, .5);

  play(bnat, 2, .5);
  play(bnat, 2, .5);
  play(bnat, 2, .25);
  play(bnat, 2, .25);
  rest(.25);
  play(bnat, 2, .5);
  play(bnat, 2, .5);
  play(bnat, 2, .25);
  play(bnat, 2, .25);
  play(bnat, 2, .25);
  play(bnat, 2, .5);

  play(bb, 2, .5);
  play(bb, 2, .5);
  play(bb, 2, .25);
  play(bb, 2, .25);
  rest(.25);
  play(cnat, 3, .5);
  play(cnat, 3, .5);
  play(cnat, 3, .25);
  play(cnat, 3, .25);
  play(cnat, 3, .25);
  play(cnat, 3, .5);

  // 17
  play(dnat, 2, .25);
  play(dnat, 2, .25);
  play(dnat, 3, .25);
  rest(.25);
  play(anat, 2, .25);
  rest(.5);
  play(gsharp, 2, .25);
  rest(.25);
  play(gnat, 2, .25);
  rest(.25);
  play(fnat, 2, .5);
  play(dnat, 2, .25);
  play(fnat, 2, .25);
  play(gnat, 2, .25);

  play(cnat, 2, .25);
  play(cnat, 2, .25);
  play(dnat, 3, .25);
  rest(.25);
  play(anat, 2, .25);
  rest(.5);
  play(gsharp, 2, .25);
  rest(.25);
  play(gnat, 2, .25);
  rest(.25);
  play(fnat, 2, .5);
  play(dnat, 2, .25);
  play(fnat, 2, .25);
  play(gnat, 2, .25);

  play(bnat, 1, .25);
  play(bnat, 1, .25);
  play(dnat, 3, .25);
  rest(.25);
  play(anat, 2, .25);
  rest(.5);
  play(gsharp, 2, .25);
  rest(.25);
  play(gnat, 2, .25);
  rest(.25);
  play(fnat, 2, .5);
  play(dnat, 2, .25);
  play(fnat, 2, .25);
  play(gnat, 2, .25);

  play(bb, 1, .25);
  play(bb, 1, .25);
  play(dnat, 3, .25);
  rest(.25);
  play(anat, 2, .25);
  rest(.5);
  play(gsharp, 2, .25);
  rest(.25);
  play(gnat, 2, .25);
  rest(.25);
  play(fnat, 2, .5);
  play(dnat, 2, .25);
  play(fnat, 2, .25);
  play(gnat, 2, .25);

  // 21
  play(bb, 2, .5);
  play(bb, 2, .5);
  play(bb, 2, .25);
  play(bb, 2, .25);
  rest(.25);
  play(bb, 2, .5);
  play(bb, 2, .5);
  play(bb, 2, .25);
  play(bb, 2, .25);
  play(bb, 2, .25);
  play(bb, 2, .5);

  play(cnat, 3, .5);
  play(cnat, 3, .5);
  play(cnat, 3, .25);
  play(cnat, 3, .25);
  rest(.25);
  play(cnat, 3, .5);
  play(cnat, 3, .5);
  play(cnat, 3, .25);
  play(cnat, 3, .25);
  play(cnat, 3, .25);
  play(cnat, 3, .5);

  play(dnat, 3, .5);
  play(dnat, 3, .5);
  play(dnat, 3, .25);
  play(dnat, 3, .25);
  rest(.25);
  play(dnat, 3, .5);
  play(dnat, 3, .5);
  play(dnat, 3, .25);
  play(dnat, 3, .25);
  play(dnat, 3, .25);
  play(dnat, 3, .5);

  play(csharp, 3, .5);
  play(csharp, 3, .5);
  play(csharp, 3, .25);
  play(csharp, 3, .25);
  rest(.25);
  play(csharp, 3, .5);
  play(csharp, 3, .5);
  play(csharp, 3, .25);
  play(eb, 3, .25);
  play(eb, 3, .25);
  play(eb, 3, .5);

  // 25
  play(bb, 2, .5);
  play(bb, 2, .5);
  play(bb, 2, .25);
  play(bb, 2, .25);
  rest(.25);
  play(bb, 2, .5);
  play(bb, 2, .5);
  play(bb, 2, .25);
  play(bb, 2, .25);
  play(bb, 2, .25);
  play(bb, 2, .5);

  play(cnat, 3, .5);
  play(cnat, 3, .5);
  play(cnat, 3, .25);
  play(cnat, 3, .25);
  rest(.25);
  play(cnat, 3, .5);
  play(cnat, 3, .5);
  play(cnat, 3, .25);
  play(cnat, 3, .25);
  play(cnat, 3, .25);
  play(cnat, 3, .5);

  play(dnat, 3, .5);
  play(dnat, 3, .5);
  play(dnat, 3, .25);
  play(dnat, 3, .25);
  rest(.25);
  play(dnat, 3, .5);
  play(dnat, 3, .5);
  play(dnat, 3, .25);
  play(dnat, 3, .25);
  play(dnat, 3, .25);
  play(dnat, 3, .5);

  play(csharp, 3, .5);
  play(csharp, 3, .5);
  play(csharp, 3, .25);
  play(csharp, 3, .25);
  rest(.25);
  play(csharp, 3, .5);
  play(csharp, 3, .5);
  play(csharp, 3, .25);
  play(eb, 3, .25);
  play(eb, 3, .25);
  play(eb, 3, .5);

  // Repeat 21-28
  play(bb, 2, .5);
  play(bb, 2, .5);
  play(bb, 2, .25);
  play(bb, 2, .25);
  rest(.25);
  play(bb, 2, .5);
  play(bb, 2, .5);
  play(bb, 2, .25);
  play(bb, 2, .25);
  play(bb, 2, .25);
  play(bb, 2, .5);

  play(cnat, 3, .5);
  play(cnat, 3, .5);
  play(cnat, 3, .25);
  play(cnat, 3, .25);
  rest(.25);
  play(cnat, 3, .5);
  play(cnat, 3, .5);
  play(cnat, 3, .25);
  play(cnat, 3, .25);
  play(cnat, 3, .25);
  play(cnat, 3, .5);

  play(dnat, 3, .5);
  play(dnat, 3, .5);
  play(dnat, 3, .25);
  play(dnat, 3, .25);
  rest(.25);
  play(dnat, 3, .5);
  play(dnat, 3, .5);
  play(dnat, 3, .25);
  play(dnat, 3, .25);
  play(dnat, 3, .25);
  play(dnat, 3, .5);

  play(csharp, 3, .5);
  play(csharp, 3, .5);
  play(csharp, 3, .25);
  play(csharp, 3, .25);
  rest(.25);
  play(csharp, 3, .5);
  play(csharp, 3, .5);
  play(csharp, 3, .25);
  play(eb, 3, .25);
  play(eb, 3, .25);
  play(eb, 3, .5);

  play(bb, 2, .5);
  play(bb, 2, .5);
  play(bb, 2, .25);
  play(bb, 2, .25);
  rest(.25);
  play(bb, 2, .5);
  play(bb, 2, .5);
  play(bb, 2, .25);
  play(bb, 2, .25);
  play(bb, 2, .25);
  play(bb, 2, .5);

  play(cnat, 3, .5);
  play(cnat, 3, .5);
  play(cnat, 3, .25);
  play(cnat, 3, .25);
  rest(.25);
  play(cnat, 3, .5);
  play(cnat, 3, .5);
  play(cnat, 3, .25);
  play(cnat, 3, .25);
  play(cnat, 3, .25);
  play(cnat, 3, .5);

  play(dnat, 3, .5);
  play(dnat, 3, .5);
  play(dnat, 3, .25);
  play(dnat, 3, .25);
  rest(.25);
  play(dnat, 3, .5);
  play(dnat, 3, .5);
  play(dnat, 3, .25);
  play(dnat, 3, .25);
  play(dnat, 3, .25);
  play(dnat, 3, .5);

  play(csharp, 3, .5);
  play(csharp, 3, .5);
  play(csharp, 3, .25);
  play(csharp, 3, .25);
  rest(.25);
  play(csharp, 3, .5);
  play(csharp, 3, .5);
  play(csharp, 3, .25);
  play(eb, 3, .25);
  play(eb, 3, .25);
  play(eb, 3, .5);

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

