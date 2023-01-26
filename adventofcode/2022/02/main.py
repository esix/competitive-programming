import sys

MAPPING = dict(A = 'R', B = 'P', C = 'S', X = 'R', Y = 'P', Z = 'S')
SHAPE_SCORE = dict(R = 1, P = 2, S = 3)
WINNER = dict(R = 'P', P = 'S', S = 'R')
LOOSER = dict(R = 'S', P = 'R', S = 'P')

def get_outcome_score(oppo, mine):
    if oppo == mine:
        return (3, 3)
    elif WINNER[oppo] == mine:
        return (0, 6)
    else:
        return (6, 0)


def get_score(oppo, mine):
    oppo_outcome_score, mine_outcome_score = get_outcome_score(oppo, mine)
    return (SHAPE_SCORE[oppo] + oppo_outcome_score, SHAPE_SCORE[mine] + mine_outcome_score)


mine_score = 0
mine_score_2 = 0

lines = [line.strip().split(' ') for line in sys.stdin]

for line in lines:
    oppo, mine = line
    oppo = MAPPING[oppo]
    mine = MAPPING[mine]

    oppo_round_score, mine_round_score = get_score(oppo, mine)
    mine_score += mine_round_score

    # part 2
    if mine == 'R':                         # now R means loose
        mine = LOOSER[oppo]
    elif mine == 'P':                       # P means draw
        mine = oppo 
    else:                                   # S means win
        mine = WINNER[oppo]

    oppo_round_score_2, mine_round_score_2 = get_score(oppo, mine)
    mine_score_2 += mine_round_score_2

print (mine_score)
print (mine_score_2)
