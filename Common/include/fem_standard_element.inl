/*!
 * \file fem_standard_element.inl
 * \brief In-Line subroutines of the <i>fem_standard_element.hpp</i> file.
 * \author E. van der Weide
 * \version 4.1.0 "Cardinal"
 *
 * SU2 Lead Developers: Dr. Francisco Palacios (Francisco.D.Palacios@boeing.com).
 *                      Dr. Thomas D. Economon (economon@stanford.edu).
 *
 * SU2 Developers: Prof. Juan J. Alonso's group at Stanford University.
 *                 Prof. Piero Colonna's group at Delft University of Technology.
 *                 Prof. Nicolas R. Gauger's group at Kaiserslautern University of Technology.
 *                 Prof. Alberto Guardone's group at Polytechnic University of Milan.
 *                 Prof. Rafael Palacios' group at Imperial College London.
 *
 * Copyright (C) 2012-2015 SU2, the open-source CFD code.
 *
 * SU2 is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * SU2 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with SU2. If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

inline FEMStandardElementBaseClass::FEMStandardElementBaseClass(){}

inline FEMStandardElementBaseClass::~FEMStandardElementBaseClass(){}

inline const su2double* FEMStandardElementBaseClass::GetWeightsIntegration(void) const {return wIntegration.data();}

inline unsigned short FEMStandardElementBaseClass::GetNIntegration(void) const {return nIntegration;}

inline unsigned short FEMStandardElementBaseClass::GetOrderExact(void){return orderExact;}

inline FEMStandardElementClass::FEMStandardElementClass(){matBasisIntegration = NULL; matDerBasisIntTrans = NULL;}

inline FEMStandardElementClass::FEMStandardElementClass(const FEMStandardElementClass &other) : FEMStandardElementBaseClass(other) {Copy(other);}

inline FEMStandardElementClass& FEMStandardElementClass::operator=(const FEMStandardElementClass &other){Copy(other); return (*this);}

inline su2double* FEMStandardElementClass::GetBasisFunctionsIntegration(void){return lagBasisIntegration.data();}

inline su2double* FEMStandardElementClass::GetDrBasisFunctionsIntegration(void){return drLagBasisIntegration.data();}

inline su2double* FEMStandardElementClass::GetDsBasisFunctionsIntegration(void){return dsLagBasisIntegration.data();}

inline su2double* FEMStandardElementClass::GetDtBasisFunctionsIntegration(void){return dtLagBasisIntegration.data();}

inline const su2double* FEMStandardElementClass::GetMatBasisFunctionsIntegration(void) const {return matBasisIntegration;}

inline const su2double* FEMStandardElementClass::GetDerMatBasisFunctionsIntTrans(void) const {return matDerBasisIntTrans;}

inline unsigned short* FEMStandardElementClass::GetConnFace0(void){return connFace0.data();}

inline unsigned short* FEMStandardElementClass::GetConnFace1(void){return connFace1.data();}

inline unsigned short* FEMStandardElementClass::GetConnFace2(void){return connFace2.data();}

inline unsigned short* FEMStandardElementClass::GetConnFace3(void){return connFace3.data();}

inline unsigned short* FEMStandardElementClass::GetConnFace4(void){return connFace4.data();}

inline unsigned short* FEMStandardElementClass::GetConnFace5(void){return connFace5.data();}

inline unsigned short FEMStandardElementClass::GetNDOFs(void){return nDOFs;}

inline unsigned short FEMStandardElementClass::GetNPoly(void){return nPoly;}

inline FEMStandardInternalFaceClass::FEMStandardInternalFaceClass(){matDerBasisElemIntegrationSide0 = matDerBasisElemIntegrationSide1 = NULL;}

inline FEMStandardInternalFaceClass::FEMStandardInternalFaceClass(const FEMStandardInternalFaceClass &other) : FEMStandardElementBaseClass(other) {Copy(other);}

inline FEMStandardInternalFaceClass& FEMStandardInternalFaceClass::operator=(const FEMStandardInternalFaceClass &other){Copy(other); return (*this);}

inline su2double* FEMStandardInternalFaceClass::GetDrBasisElemIntegrationSide0(void) {return drLagBasisElemIntegrationSide0.data();}

inline su2double* FEMStandardInternalFaceClass::GetDrBasisElemIntegrationSide1(void) {return drLagBasisElemIntegrationSide1.data();}

inline su2double* FEMStandardInternalFaceClass::GetDsBasisElemIntegrationSide0(void) {return dsLagBasisElemIntegrationSide0.data();}

inline su2double* FEMStandardInternalFaceClass::GetDsBasisElemIntegrationSide1(void) {return dsLagBasisElemIntegrationSide1.data();}

inline su2double* FEMStandardInternalFaceClass::GetDtBasisElemIntegrationSide0(void) {return dtLagBasisElemIntegrationSide0.data();}

inline su2double* FEMStandardInternalFaceClass::GetDtBasisElemIntegrationSide1(void) {return dtLagBasisElemIntegrationSide1.data();}

inline su2double* FEMStandardInternalFaceClass::GetMatDerBasisElemIntegrationSide0(void) {return matDerBasisElemIntegrationSide0;}

inline su2double* FEMStandardInternalFaceClass::GetMatDerBasisElemIntegrationSide1(void) {return matDerBasisElemIntegrationSide1;}

inline su2double* FEMStandardInternalFaceClass::GetDrBasisFaceIntegrationSide0(void) {return drLagBasisFaceIntegrationSide0.data();}

inline su2double* FEMStandardInternalFaceClass::GetDrBasisFaceIntegrationSide1(void) {return drLagBasisFaceIntegrationSide1.data();}

inline su2double* FEMStandardInternalFaceClass::GetDsBasisFaceIntegrationSide0(void) {return dsLagBasisFaceIntegrationSide0.data();}

inline su2double* FEMStandardInternalFaceClass::GetDsBasisFaceIntegrationSide1(void) {return dsLagBasisFaceIntegrationSide1.data();}

inline unsigned short FEMStandardInternalFaceClass::GetNDOFsElemSide0(void) const {return nDOFsElemSide0;}

inline unsigned short FEMStandardInternalFaceClass::GetNDOFsElemSide1(void) const {return nDOFsElemSide1;}

inline unsigned short FEMStandardInternalFaceClass::GetNDOFsFaceSide0(void) const {return nDOFsFaceSide0;}

inline unsigned short FEMStandardInternalFaceClass::GetNDOFsFaceSide1(void) const {return nDOFsFaceSide1;}

inline FEMStandardBoundaryFaceClass::FEMStandardBoundaryFaceClass(){matDerBasisElemIntegration = NULL;}

inline FEMStandardBoundaryFaceClass::FEMStandardBoundaryFaceClass(const FEMStandardBoundaryFaceClass &other) : FEMStandardElementBaseClass(other) {Copy(other);}

inline FEMStandardBoundaryFaceClass& FEMStandardBoundaryFaceClass::operator=(const FEMStandardBoundaryFaceClass &other){Copy(other); return (*this);}

inline su2double* FEMStandardBoundaryFaceClass::GetDrBasisElemIntegration(void) {return drLagBasisElemIntegration.data();}

inline su2double* FEMStandardBoundaryFaceClass::GetDsBasisElemIntegration(void) {return dsLagBasisElemIntegration.data();}

inline su2double* FEMStandardBoundaryFaceClass::GetDtBasisElemIntegration(void) {return dtLagBasisElemIntegration.data();}

inline su2double* FEMStandardBoundaryFaceClass::GetMatDerBasisElemIntegration(void) {return matDerBasisElemIntegration;}

inline su2double* FEMStandardBoundaryFaceClass::GetDrBasisFaceIntegration(void) {return drLagBasisFaceIntegration.data();}

inline su2double* FEMStandardBoundaryFaceClass::GetDsBasisFaceIntegration(void) {return dsLagBasisFaceIntegration.data();}

inline unsigned short FEMStandardBoundaryFaceClass::GetNDOFsElem(void) const {return nDOFsElem;}

inline unsigned short FEMStandardBoundaryFaceClass::GetNDOFsFace(void) const {return nDOFsFace;}
