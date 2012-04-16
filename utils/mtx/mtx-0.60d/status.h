/* Header for module status, generated by p2c 1.21alpha-07.Dec.93 */
#ifndef STATUS_H
#define STATUS_H


#ifdef STATUS_G
# define vextern
#else
# define vextern extern
#endif
/* Keep track of duration, octave, slur and beam status. */


extern Void initStatus PV();
extern Void saveStatus PP((int voice));

extern Void resetDuration PP((int voice, int dur));
extern Char duration PP((int voice));

extern short slurLevel PP((int voice));
extern short beamLevel PP((int voice));
extern boolean noBeamMelisma PP((int voice));
extern boolean noSlurMelisma PP((int voice, int history));
extern short afterSlur PP((int voice));
extern Void setUnbeamed PP((int voice));
extern Void setUnslurred PP((int voice));
extern Void beginBeam PP((int voice, Char *note));
extern Void endBeam PP((int voice));
extern Void beginSlur PP((int voice, Char *note));
extern Void endSlur PP((int voice, Char *note));
extern Void activateBeamsAndSlurs PP((int voice));

extern Void setOctave PP((int voice));
extern Void resetOctave PP((int voice));
extern Char octave PP((int voice));
extern Void newOctave PP((int voice, int dir));
extern Void initOctaves PP((Char *octaves));

extern Void renewPitch PP((int voice, Char *note));
extern short chordPitch PP((int voice));
extern Void renewChordPitch PP((int voice, Char *note));
extern Void rememberDurations PV();
extern Void restoreDurations PV();
extern Void chordTie PP((int voice, Char *lab));


typedef short int5[5];


extern Void getChordTies PP((int voice, short *pitches, Char *labels));


#undef vextern

#endif /*STATUS_H*/

/* End. */
