# this is a program for calcul TVA due

tva_facturee = float(input("enter you TVA Facturee : "))
tva_recu = float(input("enter your TVA Recuperable : "))
credit_tva = float(input("enter your credit TVA de la president annee : "))

tva_due = tva_facturee - tva_recu - credit_tva
print(tva_due)
