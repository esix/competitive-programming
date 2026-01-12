type Point = [number, number];

function dist(p1: Point, p2: Point): number {
    const dx = Math.abs(p1[0] - p2[0]);
    const dy = Math.abs(p1[1] - p2[1]);
    return Math.max(dx, dy);
}

function minTimeToVisitAllPoints(points: Point[]): number {
    let result = 0;
    for (let i = 1; i < points.length; i++) {
        result += dist(points[i], points[i - 1]);
    }
    return result;
};
