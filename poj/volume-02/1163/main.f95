PROGRAM main
  implicit none
  integer :: n, i, j, result
  integer, dimension(:), allocatable :: a
  integer r(100)
  r(1) = 0

  read(*,*) n
  do i = 1, n
    allocate(a(i))
    read(*,*)a

    if (i > 1) then 
      r(i) = r(i-1) + a(i)
    end if

    do j = i-1, 2, -1
      r(j) = max(r(j-1), r(j)) + a(j)
    end do

    r(1) = r(1) + a(1)
 
    deallocate(a)
  end do

  result = 0
  do i = 1, n
    result = max(result, r(i))
  end do

  write(*, "(I0)") result
END PROGRAM